
#ifndef __ldm_marshal_MARSHAL_H__
#define __ldm_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:INT,POINTER (./ldm-marshal.list:1) */
extern void ldm_marshal_VOID__INT_POINTER (GClosure     *closure,
                                           GValue       *return_value,
                                           guint         n_param_values,
                                           const GValue *param_values,
                                           gpointer      invocation_hint,
                                           gpointer      marshal_data);

/* BOOLEAN:VOID (./ldm-marshal.list:2) */
extern void ldm_marshal_BOOLEAN__VOID (GClosure     *closure,
                                       GValue       *return_value,
                                       guint         n_param_values,
                                       const GValue *param_values,
                                       gpointer      invocation_hint,
                                       gpointer      marshal_data);

/* BOOLEAN:STRING (./ldm-marshal.list:3) */
extern void ldm_marshal_BOOLEAN__STRING (GClosure     *closure,
                                         GValue       *return_value,
                                         guint         n_param_values,
                                         const GValue *param_values,
                                         gpointer      invocation_hint,
                                         gpointer      marshal_data);

/* BOOLEAN:OBJECT (./ldm-marshal.list:4) */
extern void ldm_marshal_BOOLEAN__OBJECT (GClosure     *closure,
                                         GValue       *return_value,
                                         guint         n_param_values,
                                         const GValue *param_values,
                                         gpointer      invocation_hint,
                                         gpointer      marshal_data);

/* STRING:VOID (./ldm-marshal.list:5) */
extern void ldm_marshal_STRING__VOID (GClosure     *closure,
                                      GValue       *return_value,
                                      guint         n_param_values,
                                      const GValue *param_values,
                                      gpointer      invocation_hint,
                                      gpointer      marshal_data);

/* OBJECT:VOID (./ldm-marshal.list:6) */
extern void ldm_marshal_OBJECT__VOID (GClosure     *closure,
                                      GValue       *return_value,
                                      guint         n_param_values,
                                      const GValue *param_values,
                                      gpointer      invocation_hint,
                                      gpointer      marshal_data);

/* OBJECT:STRING (./ldm-marshal.list:7) */
extern void ldm_marshal_OBJECT__STRING (GClosure     *closure,
                                        GValue       *return_value,
                                        guint         n_param_values,
                                        const GValue *param_values,
                                        gpointer      invocation_hint,
                                        gpointer      marshal_data);

G_END_DECLS

#endif /* __ldm_marshal_MARSHAL_H__ */

