#include <ana.h>

static ana_function_defn *ana_new_function_defn(void)
{
  ana_function_defn *obj = malloc(sizeof(*obj));

  obj->base.type  = &ana_function_type;
  obj->base.next  = NULL;
  obj->base.flags = 0;
  obj->base.refcount = 0;
  obj->base.is_tracked = 0;

  obj->parameters   = ana_array_new(4);
  obj->code         = ana_code_new(COMO_CODE_SIZE);
  obj->line_mapping = ana_map_new(4);
  obj->jump_targets = ana_array_new(4);
 
  return obj;
}

static ana_function *create_function(char *filename, char *name, int type)
{
  ana_function *obj = malloc(sizeof(*obj));

  obj->base.type = &ana_function_type;
  obj->base.next = NULL;
  obj->base.flags = 0;
  obj->flags = type;
  obj->base.refcount = 0;
  obj->name = ana_stringfromstring(name);
  obj->filename = ana_stringfromstring(filename);
  
  return obj;
}

static void function_print(ana_object *obj)
{
  ana_function *self = ana_get_function(obj); 

  fprintf(stdout, "<function '%s' at %p>", ana_cstring(self->name), 
      (void *)self);
}

static void function_dtor(ana_object *obj)
{
  ana_function *self = ana_get_function(obj);

  if(self->flags & COMO_FUNCTION_LANG)
  {
    ana_array_foreach_apply(self->func->parameters, ana_object_dtor);
    ana_object_dtor(self->func->parameters);

    ana_object_dtor(self->func->code);

    ana_map_foreach_kv_apply(self->func->line_mapping, ana_object_dtor);
    ana_object_dtor(self->func->line_mapping);

    ana_array_foreach_apply(self->func->jump_targets, ana_object_dtor);
    ana_object_dtor(self->func->jump_targets);
    
    free(self->func);
  }

  if( (self->flags & COMO_FUNCTION_NATIVE_METHOD) == COMO_FUNCTION_NATIVE_METHOD
    && self->method.m_parameters != NULL
    && self->method.m_parameters != ana_array_empty)
  {
    ana_array_foreach_apply(self->method.m_parameters, ana_object_dtor);
    ana_object_dtor(self->method.m_parameters);
  }

  ana_object_dtor(self->name);
  ana_object_dtor(self->filename);

  free(self);
}

static int function_equals(ana_object *a, ana_object *b)
{
  return a == b;
}

static int function_bool(ana_object *obj)
{
  COMO_UNUSED(obj);

  return 1;
}

static ana_object *function_string(ana_object *obj)
{
  ana_function *self = ana_get_function(obj);

  return ana_stringfromstring(
    ana_build_str("<function '%s' at %p>", ana_cstring(self->name), 
      (void *)self)
  );
}

static ana_object *function_equals_wrap(ana_object *obj, ana_object *x)
{
  return ana_boolfromint(function_equals(obj, x));
}

static ana_comparison_ops compops = 
{
  .obj_eq  = function_equals_wrap,
  .obj_neq = NULL,
  .obj_gt  = NULL,
  .obj_lt  = NULL,
  .obj_gte = NULL,
  .obj_lte = NULL
};

ana_type ana_function_type = 
{
  .obj_name    = "function",
  .obj_print   = function_print,
  .obj_dtor    = function_dtor,
  .obj_equals  = function_equals,
  .obj_bool    = function_bool,
  .obj_hash    = NULL,
  .obj_str     = function_string,
  .obj_init    = NULL,
  .obj_deinit  = NULL,
  .obj_binops  = NULL,
  .obj_unops   = NULL,
  .obj_compops = &compops,
  .obj_seqops  = NULL,
  .obj_get_attr = NULL,
  .obj_props    = NULL,
  .obj_iter     = NULL,
  .obj_iter_next = NULL
};

COMO_OBJECT_API ana_object *ana_function_defn_new(char *filename, char *name)
{ 
  ana_function *fn = create_function(filename, name, COMO_FUNCTION_LANG);

  fn->func = ana_new_function_defn();

  return (ana_object *)fn;
}


COMO_OBJECT_API ana_object *ana_functionfromhandler(
  char *filename, char *name, ana_function_handler handler)
{
  ana_function *fn = create_function(filename, name, COMO_FUNCTION_NATIVE);

  fn->handler = handler;

  return (ana_object *)fn;
}

COMO_OBJECT_API ana_object *ana_methodfromhandler(
  char *filename, char *name, ana_method_handler handler, ana_object *parameters)
{

  ana_function *fn = create_function(filename, name, 
    COMO_FUNCTION_NATIVE | COMO_FUNCTION_METHOD);

  fn->method.m_handler    = handler;
  fn->method.m_parameters = parameters == NULL ? ana_array_empty : parameters;

  return (ana_object *)fn;  
}


static void bounded_function_print(ana_object *obj)
{
  ana_bounded_function *self = ana_get_bounded_function(obj); 

  fprintf(stdout, "<function.bounded '%s' at %p>", ana_cstring(self->func->name), 
      (void *)self);
}

static void bounded_function_dtor(ana_object *obj)
{
  free(obj);
}

static int bounded_function_equals(ana_object *a, ana_object *b)
{
  return a == b;
}

static int bounded_function_bool(ana_object *obj)
{
  COMO_UNUSED(obj);

  return 1;
}

static ana_object *bounded_function_string(ana_object *obj)
{
  ana_bounded_function *self = ana_get_bounded_function(obj);

  return ana_stringfromstring(
    ana_build_str("<function '%s' at %p>", ana_cstring(self->func->name), 
      (void *)self)
  );
}

ana_type ana_bounded_function_type = 
{
  .obj_name    = "function.bounded",
  .obj_print   = bounded_function_print,
  .obj_dtor    = bounded_function_dtor,
  .obj_equals  = bounded_function_equals,
  .obj_bool    = bounded_function_bool,
  .obj_hash    = NULL,
  .obj_str     = bounded_function_string,
  .obj_init    = NULL,
  .obj_deinit  = NULL,
  .obj_binops  = NULL,
  .obj_unops   = NULL,
  .obj_compops = NULL,
  .obj_seqops  = NULL,
  .obj_get_attr = NULL,
  .obj_props    = NULL,
  .obj_iter     = NULL,
  .obj_iter_next = NULL
};

COMO_OBJECT_API ana_object *ana_bounded_function_new(ana_object *inst, 
    ana_function *func)
{
  ana_bounded_function *obj = malloc(sizeof(*obj));

  obj->base.type  = &ana_bounded_function_type;
  obj->base.next  = NULL;
  obj->base.flags = 0;
  obj->base.refcount = 0;
  obj->base.is_tracked = 0;

  obj->self = inst;
  obj->func = func;

  return (ana_object *)obj;
}