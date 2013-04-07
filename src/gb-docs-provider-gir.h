/* gb-docs-provider-gir.h
 *
 * Copyright (C) 2013 Christian Hergert <christian@hergert.me>
 *
 * This file is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GB_DOCS_PROVIDER_GIR_H
#define GB_DOCS_PROVIDER_GIR_H

#include "gb-docs-provider.h"

G_BEGIN_DECLS

#define GB_TYPE_DOCS_PROVIDER_GIR            (gb_docs_provider_gir_get_type())
#define GB_DOCS_PROVIDER_GIR(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GB_TYPE_DOCS_PROVIDER_GIR, GbDocsProviderGir))
#define GB_DOCS_PROVIDER_GIR_CONST(obj)      (G_TYPE_CHECK_INSTANCE_CAST ((obj), GB_TYPE_DOCS_PROVIDER_GIR, GbDocsProviderGir const))
#define GB_DOCS_PROVIDER_GIR_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  GB_TYPE_DOCS_PROVIDER_GIR, GbDocsProviderGirClass))
#define GB_IS_DOCS_PROVIDER_GIR(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GB_TYPE_DOCS_PROVIDER_GIR))
#define GB_IS_DOCS_PROVIDER_GIR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  GB_TYPE_DOCS_PROVIDER_GIR))
#define GB_DOCS_PROVIDER_GIR_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  GB_TYPE_DOCS_PROVIDER_GIR, GbDocsProviderGirClass))

typedef struct _GbDocsProviderGir        GbDocsProviderGir;
typedef struct _GbDocsProviderGirClass   GbDocsProviderGirClass;
typedef struct _GbDocsProviderGirPrivate GbDocsProviderGirPrivate;

struct _GbDocsProviderGir
{
   GbDocsProvider parent;

   /*< private >*/
   GbDocsProviderGirPrivate *priv;
};

struct _GbDocsProviderGirClass
{
   GbDocsProviderClass parent_class;
};

GType gb_docs_provider_gir_get_type (void) G_GNUC_CONST;

G_END_DECLS

#endif /* GB_DOCS_PROVIDER_GIR_H */
