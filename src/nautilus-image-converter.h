/*
 *  nautilus-image-converter.h
 * 
 *  Copyright (C) 2004-2005 Jürg Billeter
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public
 *  License along with this library; if not, write to the Free
 *  Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *  Author: Jürg Billeter <j@bitron.ch>
 * 
 */

#ifndef NAUTILUS_IMAGE_CONVERTER_H
#define NAUTILUS_IMAGE_CONVERTER_H

#include <glib-object.h>

G_BEGIN_DECLS

/* Declarations for the open terminal extension object.  This object will be
 * instantiated by nautilus.  It implements the GInterfaces 
 * exported by libnautilus. */


#define NAUTILUS_TYPE_IMAGE_CONVERTER	  (nautilus_image_converter_get_type ())
#define NAUTILUS_IMAGE_CONVERTER(o)		  (G_TYPE_CHECK_INSTANCE_CAST ((o), NAUTILUS_TYPE_IMAGE_CONVERTER, NautilusImageConverter))
#define NAUTILUS_IS_IMAGE_CONVERTER(o)	  (G_TYPE_CHECK_INSTANCE_TYPE ((o), NAUTILUS_TYPE_IMAGE_CONVERTER))
typedef struct _NautilusImageConverter	  NautilusImageConverter;
typedef struct _NautilusImageConverterClass	  NautilusImageConverterClass;

struct _NautilusImageConverter {
	GObject parent_slot;
};

struct _NautilusImageConverterClass {
	GObjectClass parent_slot;
};

GType nautilus_image_converter_get_type      (void);
void  nautilus_image_converter_register_type (GTypeModule *module);

G_END_DECLS

#endif
