/* lib/config.h.  Generated from config.h.in by configure.  */
/* lib/config.h.in.  Generated from configure.ac by autoheader.  */

/* cairo required major version */
#define CAIRO_REQUIRED_MAJOR 1

/* cairo required micro version */
#define CAIRO_REQUIRED_MICRO 2

/* cairo required minor version */
#define CAIRO_REQUIRED_MINOR 10

/* Define to 1 to enable run-time debugging */
/* #undef DEBUG */


/* Enable compile-time and run-time bounds-checking, and some warnings,
   without upsetting glibc 2.15+.  */
#if !defined _FORTIFY_SOURCE && defined __OPTIMIZE__ && __OPTIMIZE__
# define _FORTIFY_SOURCE 2
#endif
   

/* glib required major version */
#define GLIB_REQUIRED_MAJOR 2

/* glib required micro version */
#define GLIB_REQUIRED_MICRO 4

/* glib required minor version */
#define GLIB_REQUIRED_MINOR 32

/* gstreamer required major version */
#define GSTREAMER_REQUIRED_MAJOR 1

/* gstreamer required micro version */
#define GSTREAMER_REQUIRED_MICRO 0

/* gstreamer required minor version */
#define GSTREAMER_REQUIRED_MINOR 4

/* gtk required major version */
#define GTK_REQUIRED_MAJOR 3

/* gtk required micro version */
#define GTK_REQUIRED_MICRO 2

/* gtk required minor version */
#define GTK_REQUIRED_MINOR 4

/* Expands to g_type_init if GLIB < 2.36.  */
#ifdef MUST_CALL_G_TYPE_INIT
# define G_TYPE_INIT_WRAPPER() g_type_init ()
#else
# define G_TYPE_INIT_WRAPPER()
#endif


/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 or 0, depending whether the compiler supports simple visibility
   declarations. */
#define HAVE_VISIBILITY 1

/* libcurl required major version */
#define LIBCURL_REQUIRED_MAJOR 7

/* libcurl required micro version */
#define LIBCURL_REQUIRED_MICRO 1

/* libcurl required minor version */
#define LIBCURL_REQUIRED_MINOR 10

/* Define to the extension used for runtime loadable modules, say, ".so". */
#define LT_MODULE_EXT ".so"

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define to the shared library suffix, say, ".dylib". */
/* #undef LT_SHARED_EXT */

/* Define to the shared archive member specification, say "(shr.o)". */
/* #undef LT_SHARED_LIB_MEMBER */

/* Define to 1 to enable Lua macros for integer manipulation */
/* #undef LUA_COMPAT_APIINTCASTS */

/* Lua required version. */
#define LUA_REQUIRED_VERSION 502

/* Name of package */
#define PACKAGE "nclua"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "alan@telemidia.puc-rio.br"

/* Define to the full name of this package. */
#define PACKAGE_NAME "NCLua"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "NCLua 1.3.229-2d631-dirty"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "nclua"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://github.com/telemidia/nclua"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.3.229-2d631-dirty"

/* pango required major version */
#define PANGO_REQUIRED_MAJOR 1

/* pango required micro version */
#define PANGO_REQUIRED_MICRO 0

/* pango required minor version */
#define PANGO_REQUIRED_MINOR 30

/* soup required major version */
#define SOUP_REQUIRED_MAJOR 2

/* soup required micro version */
#define SOUP_REQUIRED_MICRO 0

/* soup required minor version */
#define SOUP_REQUIRED_MINOR 42

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "1.3.229-2d631-dirty"

/* Define to 1 if you have libcurl-7.10.1 >= 2.42. */
/* #undef WITH_CURL */

/* build the geolocation event class */
#define WITH_EVENT_GEOLOCATION 1

/* Define to 1 if you have gio-2.0 >= 2.32.4. */
#define WITH_GIO 1

/* Define to 1 if you have gstreamer-1.0 >= 1.4.0 gstreamer-video-1.0 >=
   1.4.0. */
#define WITH_GSTREAMER 1

/* Define to 1 if you have gtk+-3.0 >= 3.4.2. */
#define WITH_GTK 1

/* Define to 1 if you have libsoup-2.4 >= 2.42. */
#define WITH_SOUP 1

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to 1 if compiler is checking for lint. */
/* #undef lint */
