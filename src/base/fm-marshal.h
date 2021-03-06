
#ifndef __fm_marshal_MARSHAL_H__
#define __fm_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* INT:POINTER,POINTER (base/fm-marshal.list:1) */
extern void fm_marshal_INT__POINTER_POINTER (GClosure     *closure,
                                             GValue       *return_value,
                                             guint         n_param_values,
                                             const GValue *param_values,
                                             gpointer      invocation_hint,
                                             gpointer      marshal_data);

/* BOOL:POINTER,BOOL (base/fm-marshal.list:2) */
extern void fm_marshal_BOOLEAN__POINTER_BOOLEAN (GClosure     *closure,
                                                 GValue       *return_value,
                                                 guint         n_param_values,
                                                 const GValue *param_values,
                                                 gpointer      invocation_hint,
                                                 gpointer      marshal_data);
#define fm_marshal_BOOL__POINTER_BOOL	fm_marshal_BOOLEAN__POINTER_BOOLEAN

/* INT:POINTER,POINTER,POINTER (base/fm-marshal.list:3) */
extern void fm_marshal_INT__POINTER_POINTER_POINTER (GClosure     *closure,
                                                     GValue       *return_value,
                                                     guint         n_param_values,
                                                     const GValue *param_values,
                                                     gpointer      invocation_hint,
                                                     gpointer      marshal_data);

G_END_DECLS

#endif /* __fm_marshal_MARSHAL_H__ */

