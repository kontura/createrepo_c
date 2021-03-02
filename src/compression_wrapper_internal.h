/*
 * Copyright (C) 2021 Red Hat, Inc.
 *
 * Licensed under the GNU Lesser General Public License Version 2.1
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */


#ifndef __C_CREATEREPOLIB_COMPRESSION_WRAPPER_INTERNAL_H__
#define __C_CREATEREPOLIB_COMPRESSION_WRAPPER_INTERNAL_H__

#ifdef __cplusplus
extern "C" {
#endif

/** Check if compression type string is valid.
 * @param type          compression type string
 * @return              whether type is valid
 */
gboolean cr_valid_compression(cr_CompressionType type);

#ifdef __cplusplus
}
#endif

#endif /* __C_CREATEREPOLIB_COMPRESSION_WRAPPER_INTERNAL_H__ */
