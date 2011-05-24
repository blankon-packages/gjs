
#ifndef __ldm_marshal_MARSHAL_H__
#define __ldm_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* BOOLEAN:OBJECT (./ldm-marshal.list:1) */
extern void ldm_marshal_BOOLEAN__OBJECT (GClosure     *closure,
                                         GValue       *return_value,
                                         guint         n_param_values,
                                         const GValue *param_values,
                                         gpointer      invocation_hint,
                                         gpointer      marshal_data);

/* VOID:INT,POINTER (./ldm-marshal.list:2) */
extern void ldm_marshal_VOID__INT_POINTER (GClosure     *closure,
                                           GValue       *return_value,
                                           guint         n_param_values,
                                           const GValue *param_values,
                                           gpointer      invocation_hint,
                                           gpointer      marshal_data);

/* VOID:OBJECT,BOOLEAN (./ldm-marshal.list:3) */
extern void ldm_marshal_VOID__OBJECT_BOOLEAN (GClosure     *closure,
                                              GValue       *return_value,
                                              guint         n_param_values,
                                              const GValue *param_values,
                                              gpointer      invocation_hint,
                                              gpointer      marshal_data);

/* VOID:STRING,STRING,STRING (./ldm-marshal.list:4) */
extern void ldm_marshal_VOID__STRING_STRING_STRING (GClosure     *closure,
                                                    GValue       *return_value,
                                                    guint         n_param_values,
                                                    const GValue *param_values,
                                                    gpointer      invocation_hint,
                                                    gpointer      marshal_data);

G_END_DECLS

#endif /* __ldm_marshal_MARSHAL_H__ */

