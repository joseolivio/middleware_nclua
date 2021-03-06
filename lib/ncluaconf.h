/* ncluaconf.h -- NCLua configuration.
   Copyright (C) 2013-2018 PUC-Rio/Laboratorio TeleMidia

This file is part of NCLua.

NCLua is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

NCLua is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
License for more details.

You should have received a copy of the GNU General Public License
along with NCLua.  If not, see <https://www.gnu.org/licenses/>.  */

/* lib/ncluaconf.h.  Generated from ncluaconf.h.in by configure. */

#ifndef NCLUACONF_H
#define NCLUACONF_H

#ifdef  __cplusplus
# define NCLUA_BEGIN_DECLS extern "C" { /* } */
# define NCLUA_END_DECLS           /* { */ }
#else
# define NCLUA_BEGIN_DECLS
# define NCLUA_END_DECLS
#endif

#if defined NCLUA_BUILDING && defined HAVE_VISIBILITY && HAVE_VISIBILITY
# define NCLUA_API __attribute__((__visibility__("default")))
#elif defined NCLUA_BUILDING && defined _MSC_VER && !defined NCLUA_STATIC
# define NCLUA_API __declspec(dllexport)
#elif defined _MSC_VER && !defined NCLUA_STATIC
# define NCLUA_API __declspec(dllimport)
#else
# define NCLUA_API
#endif

#define NCLUA_VERSION_MAJOR 1
#define NCLUA_VERSION_MINOR 3
#define NCLUA_VERSION_MICRO 229

#endif /* NCLUACONF_H */
