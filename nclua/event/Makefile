# Makefile.in generated by automake 1.15 from Makefile.am.
# nclua/event/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994-2014 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.



# Makefile.am -- Template for generating Makefile via Automake.
# Copyright (C) 2013-2018 PUC-Rio/Laboratorio TeleMidia
#
# This file is part of NCLua.
#
# NCLua is free software: you can redistribute it and/or modify it
# under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# NCLua is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
# or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
# License for more details.
#
# You should have received a copy of the GNU General Public License
# along with NCLua.  If not, see <https://www.gnu.org/licenses/>.

# Makefile.am.common -- Common declarations.
# Copyright (C) 2013-2016 Free Software Foundation, Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.

# Makefile.am.link -- Create symbolic links to shared libraries in .libs.
# Copyright (C) 2013-2018 Free Software Foundation, Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.




am__is_gnu_make = { \
  if test -z '$(MAKELEVEL)'; then \
    false; \
  elif test -n '$(MAKE_HOST)'; then \
    true; \
  elif test -n '$(MAKE_VERSION)' && test -n '$(CURDIR)'; then \
    true; \
  else \
    false; \
  fi; \
}
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/nclua
pkgincludedir = $(includedir)/nclua
pkglibdir = $(libdir)/nclua
pkglibexecdir = $(libexecdir)/nclua
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-pc-linux-gnu
host_triplet = x86_64-pc-linux-gnu
am__append_1 = geolocation.lua
#am__append_2 = geolocation.lua
#am__append_3 = http.lua
am__append_4 = http.lua
am__append_5 = tcp.lua
#am__append_6 = tcp.lua

# http_soup
#am__append_7 = http_soup.la
##am__append_8 = $(http_soup_def_dependency)

# tcp_socket
am__append_9 = tcp_socket.la
#am__append_10 = $(tcp_socket_def_dependency)

# Generate .def files if we're on Win32.
#am__append_11 = $(def_dependency)
subdir = nclua/event
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/build-aux/libtool.m4 \
	$(top_srcdir)/build-aux/ltoptions.m4 \
	$(top_srcdir)/build-aux/ltsugar.m4 \
	$(top_srcdir)/build-aux/ltversion.m4 \
	$(top_srcdir)/build-aux/lt~obsolete.m4 \
	$(top_srcdir)/build-aux/manywarnings.m4 \
	$(top_srcdir)/build-aux/perl.m4 \
	$(top_srcdir)/build-aux/util.m4 \
	$(top_srcdir)/build-aux/visibility.m4 \
	$(top_srcdir)/build-aux/warnings.m4 $(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
DIST_COMMON = $(srcdir)/Makefile.am $(am__dist_eventdata_DATA_DIST) \
	$(noinst_HEADERS) $(am__DIST_COMMON)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/lib/config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
am__vpath_adj_setup = srcdirstrip=`echo "$(srcdir)" | sed 's|.|.|g'`;
am__vpath_adj = case $$p in \
    $(srcdir)/*) f=`echo "$$p" | sed "s|^$$srcdirstrip/||"`;; \
    *) f=$$p;; \
  esac;
am__strip_dir = f=`echo $$p | sed -e 's|^.*/||'`;
am__install_max = 40
am__nobase_strip_setup = \
  srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*|]/\\\\&/g'`
am__nobase_strip = \
  for p in $$list; do echo "$$p"; done | sed -e "s|$$srcdirstrip/||"
am__nobase_list = $(am__nobase_strip_setup); \
  for p in $$list; do echo "$$p $$p"; done | \
  sed "s| $$srcdirstrip/| |;"' / .*\//!s/ .*/ ./; s,\( .*\)/[^/]*$$,\1,' | \
  $(AWK) 'BEGIN { files["."] = "" } { files[$$2] = files[$$2] " " $$1; \
    if (++n[$$2] == $(am__install_max)) \
      { print $$2, files[$$2]; n[$$2] = 0; files[$$2] = "" } } \
    END { for (dir in files) print dir, files[dir] }'
am__base_list = \
  sed '$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;s/\n/ /g' | \
  sed '$$!N;$$!N;$$!N;$$!N;s/\n/ /g'
am__uninstall_files_from_dir = { \
  test -z "$$files" \
    || { test ! -d "$$dir" && test ! -f "$$dir" && test ! -r "$$dir"; } \
    || { echo " ( cd '$$dir' && rm -f" $$files ")"; \
         $(am__cd) "$$dir" && rm -f $$files; }; \
  }
am__installdirs = "$(DESTDIR)$(eventlibdir)" \
	"$(DESTDIR)$(eventdatadir)"
LTLIBRARIES = $(eventlib_LTLIBRARIES)
http_soup_la_LIBADD =
am__http_soup_la_SOURCES_DIST = luax-callback.h http_soup.c
#am_http_soup_la_OBJECTS =  \
#	http_soup_la-http_soup.lo
http_soup_la_OBJECTS = $(am_http_soup_la_OBJECTS)
AM_V_lt = $(am__v_lt_$(V))
am__v_lt_ = $(am__v_lt_$(AM_DEFAULT_VERBOSITY))
am__v_lt_0 = --silent
am__v_lt_1 = 
http_soup_la_LINK = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(http_soup_la_CFLAGS) \
	$(CFLAGS) $(http_soup_la_LDFLAGS) $(LDFLAGS) -o $@
#am_http_soup_la_rpath = -rpath $(eventlibdir)
stopwatch_la_LIBADD =
am_stopwatch_la_OBJECTS = stopwatch_la-stopwatch.lo
stopwatch_la_OBJECTS = $(am_stopwatch_la_OBJECTS)
stopwatch_la_LINK = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(stopwatch_la_CFLAGS) \
	$(CFLAGS) $(stopwatch_la_LDFLAGS) $(LDFLAGS) -o $@
tcp_socket_la_LIBADD =
am__tcp_socket_la_SOURCES_DIST = luax-callback.h tcp_socket.c
am_tcp_socket_la_OBJECTS =  \
	tcp_socket_la-tcp_socket.lo
tcp_socket_la_OBJECTS = $(am_tcp_socket_la_OBJECTS)
tcp_socket_la_LINK = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(tcp_socket_la_CFLAGS) \
	$(CFLAGS) $(tcp_socket_la_LDFLAGS) $(LDFLAGS) -o $@
am_tcp_socket_la_rpath = -rpath $(eventlibdir)
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
DEFAULT_INCLUDES = -I. -I$(top_builddir)/lib
depcomp = $(SHELL) $(top_srcdir)/build-aux/depcomp
am__depfiles_maybe = depfiles
am__mv = mv -f
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
LTCOMPILE = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=compile $(CC) $(DEFS) \
	$(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) \
	$(AM_CFLAGS) $(CFLAGS)
AM_V_CC = $(am__v_CC_$(V))
am__v_CC_ = $(am__v_CC_$(AM_DEFAULT_VERBOSITY))
am__v_CC_0 = @echo "  CC      " $@;
am__v_CC_1 = 
CCLD = $(CC)
LINK = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) \
	$(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_V_CCLD = $(am__v_CCLD_$(V))
am__v_CCLD_ = $(am__v_CCLD_$(AM_DEFAULT_VERBOSITY))
am__v_CCLD_0 = @echo "  CCLD    " $@;
am__v_CCLD_1 = 
SOURCES = $(http_soup_la_SOURCES) $(stopwatch_la_SOURCES) \
	$(tcp_socket_la_SOURCES)
DIST_SOURCES = $(am__http_soup_la_SOURCES_DIST) \
	$(stopwatch_la_SOURCES) $(am__tcp_socket_la_SOURCES_DIST)
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
am__dist_eventdata_DATA_DIST = check.lua engine.lua init.lua key.lua \
	ncl.lua pointer.lua queue.lua user.lua geolocation.lua \
	http.lua tcp.lua
DATA = $(dist_eventdata_DATA)
HEADERS = $(noinst_HEADERS)
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) $(LISP)
# Read a list of newline-separated strings from the standard input,
# and print each of them once, without duplicates.  Input order is
# *not* preserved.
am__uniquify_input = $(AWK) '\
  BEGIN { nonempty = 0; } \
  { items[$$0] = 1; nonempty = 1; } \
  END { if (nonempty) { for (i in items) print i; }; } \
'
# Make sure the list of sources is unique.  This is necessary because,
# e.g., the same source file might be shared among _SOURCES variables
# for different programs/libraries.
am__define_uniq_tagged_files = \
  list='$(am__tagged_files)'; \
  unique=`for i in $$list; do \
    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
  done | $(am__uniquify_input)`
ETAGS = etags
CTAGS = ctags
am__DIST_COMMON = $(srcdir)/Makefile.in \
	$(top_srcdir)/build-aux/Makefile.am.common \
	$(top_srcdir)/build-aux/Makefile.am.link \
	$(top_srcdir)/build-aux/depcomp
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /home/osboxes/Desktop/nclua/build-aux/missing aclocal-1.15
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 0
AR = ar
AS = as
AUTOCONF = ${SHELL} /home/osboxes/Desktop/nclua/build-aux/missing autoconf
AUTOHEADER = ${SHELL} /home/osboxes/Desktop/nclua/build-aux/missing autoheader
AUTOMAKE = ${SHELL} /home/osboxes/Desktop/nclua/build-aux/missing automake-1.15
AWK = mawk
CAIRO_CFLAGS = -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12
CAIRO_LIBS = -lcairo
CAIRO_REQUIRED_VERSION = 1.10.2
CC = gcc
CCDEPMODE = depmode=gcc3
CFLAGS = -g -O2 -pipe
CFLAG_VISIBILITY = -fvisibility=hidden
CPP = gcc -E
CPPFLAGS = 
CURL_CFLAGS = 
CURL_LIBS = 
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DLLTOOL = false
DSYMUTIL = 
DUMPBIN = 
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /bin/grep -E
EXEEXT = 
FGREP = /bin/grep -F
GENHTML = 
GIO_CFLAGS = -pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GIO_LIBS = -lgio-2.0 -lgobject-2.0 -lglib-2.0
GITLOG_FIX = build-aux/git-log-fix
GITLOG_START_DATE = 2014-04-08
GITLOG_TO_CHANGELOG = build-aux/gitlog-to-changelog
GLIB_CFLAGS = -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GLIB_LIBS = -lgobject-2.0 -lglib-2.0
GLIB_REQUIRED_VERSION = 2.32.4
GREP = /bin/grep
GSTREAMER_CFLAGS = -pthread -I/usr/include/gstreamer-1.0 -I/usr/lib/x86_64-linux-gnu/gstreamer-1.0/include -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GSTREAMER_LIBS = -lgstvideo-1.0 -lgstbase-1.0 -lgstreamer-1.0 -lgobject-2.0 -lglib-2.0
GSTREAMER_REQUIRED_VERSION = 1.4.0
GTK_CFLAGS = -pthread -I/usr/include/gtk-3.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/at-spi-2.0 -I/usr/include/dbus-1.0 -I/usr/lib/x86_64-linux-gnu/dbus-1.0/include -I/usr/include/gtk-3.0 -I/usr/include/gio-unix-2.0/ -I/usr/include/mirclient -I/usr/include/mircore -I/usr/include/mircookie -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng12 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GTK_LIBS = -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lglib-2.0
GTK_REQUIRED_VERSION = 3.4.2
HAVE_VISIBILITY = 1
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
LCOV = 
LD = /usr/bin/ld -m elf_x86_64
LDFLAGS = 
LIBCULR_REQUIRED_VERSION = 7.10.1
LIBM = -lm
LIBOBJS = 
LIBS = 
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIB_EXE_MACHINE_FLAG = 
LIPO = 
LN_S = ln -s
LTLIBOBJS = 
LT_MODULE_LDFLAGS = -shared -avoid-version
LT_SYS_LIBRARY_PATH = 
LUA_CFLAGS = -I/usr/include/lua5.2
LUA_LIBS = -llua5.2 -export-dynamic
LUA_REQUIRED_VERSION = 5.2
LUA_VERSION = 5.2
M4 = m4
MAKEINFO = ${SHELL} /home/osboxes/Desktop/nclua/build-aux/missing makeinfo
MANIFEST_TOOL = :
MINGW_ROOT = 
MKDIR_P = /bin/mkdir -p
NCLUA_LIBTOOL_AGE = 1
NCLUA_LIBTOOL_CURRENT = 1
NCLUA_LIBTOOL_CURRENT_MINUS_AGE = 0
NCLUA_LIBTOOL_REVISION = 0
NCLUA_LIBTOOL_STRING = 1:0:1
NCLUA_VERSION_MAJOR = 1
NCLUA_VERSION_MICRO = 229
NCLUA_VERSION_MINOR = 3
NCLUA_VERSION_STRING = 1.3.229-2d631-dirty
NM = /usr/bin/nm -B
NMEDIT = 
OBJDUMP = objdump
OBJEXT = o
OTOOL = 
OTOOL64 = 
PACKAGE = nclua
PACKAGE_BUGREPORT = alan@telemidia.puc-rio.br
PACKAGE_NAME = NCLua
PACKAGE_STRING = NCLua 1.3.229-2d631-dirty
PACKAGE_TARNAME = nclua
PACKAGE_URL = http://github.com/telemidia/nclua
PACKAGE_VERSION = 1.3.229-2d631-dirty
PANGO_CFLAGS = -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12
PANGO_LIBS = -lpangocairo-1.0 -lpango-1.0 -lgobject-2.0 -lglib-2.0 -lcairo
PANGO_REQUIRED_VERSION = 1.30.0
PATH_SEPARATOR = :
PERL = perl
PKG_CONFIG = /usr/bin/pkg-config
PKG_CONFIG_LIBDIR = 
PKG_CONFIG_PATH = 
RANLIB = ranlib
SED = /bin/sed
SET_MAKE = 
SHELL = /bin/bash
SHTOOL = 
SOEXT = .so
SOUP_CFLAGS = -pthread -I/usr/include/libsoup-2.4 -I/usr/include/libxml2 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
SOUP_LIBS = -lsoup-2.4 -lgio-2.0 -lgobject-2.0 -lglib-2.0
SOUP_REQUIRED_VERSION = 2.42
STRIP = strip
VALGRIND = 
VERSION = 1.3.229-2d631-dirty
WARN_CFLAGS = 
WERROR_CFLAGS = 
WINDRES = 
abs_builddir = /home/osboxes/Desktop/nclua/nclua/event
abs_srcdir = /home/osboxes/Desktop/nclua/nclua/event
abs_top_builddir = /home/osboxes/Desktop/nclua
abs_top_srcdir = /home/osboxes/Desktop/nclua
ac_ct_AR = ar
ac_ct_CC = gcc
ac_ct_DUMPBIN = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
bindir = ${exec_prefix}/bin
build = x86_64-pc-linux-gnu
build_alias = 
build_cpu = x86_64
build_os = linux-gnu
build_vendor = pc
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
gstpluginsdir = /usr/lib/x86_64-linux-gnu/gstreamer-1.0
host = x86_64-pc-linux-gnu
host_alias = 
host_cpu = x86_64
host_os = linux-gnu
host_vendor = pc
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /home/osboxes/Desktop/nclua/build-aux/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
luadatadir = ${datadir}/lua/5.2
lualibdir = ${libdir}/lua/5.2
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
ms_lib = 
ncluadatadir = ${datadir}/lua/5.2/nclua
nclualibdir = ${libdir}/lua/5.2/nclua
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /usr/local
program_transform_name = s,x,x,
psdir = ${docdir}
runstatedir = ${localstatedir}/run
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = ${prefix}/etc
target_alias = 
top_build_prefix = ../../
top_builddir = ../..
top_srcdir = ../..
CLEANDIRS = 
CLEANFILES = *.core *.gcda *.gcno vgcore.* $(am__append_11)
DISTCLEANFILES = 
EXTRA_DIST = $(am__append_2) $(am__append_4) $(am__append_6)
MAINTAINERCLEANFILES = Makefile.in
LINK_SO = $(LTLIBRARIES:.la=$(SOEXT))
AM_CPPFLAGS = -I$(top_srcdir)/lib -I$(top_builddir)/lib
AM_CFLAGS = $(WERROR_CFLAGS) $(WARN_CFLAGS) $(LUA_CFLAGS)
AM_LDFLAGS = -module $(LT_MODULE_LDFLAGS) $(LUA_LIBS)
noinst_HEADERS = callback.h

# stopwatch
eventlib_LTLIBRARIES = $(am__append_7) stopwatch.la $(am__append_9)
eventlibdir = $(nclualibdir)/event
eventdatadir = $(ncluadatadir)/event
dist_eventdata_DATA = check.lua engine.lua init.lua key.lua ncl.lua \
	pointer.lua queue.lua user.lua $(NULL) $(am__append_1) \
	$(am__append_3) $(am__append_5)
#def_dependency = $(am__append_8) \
#	$(stopwatch_def_dependency) $(am__append_10)
##http_soup_def_dependency = http_soup.def
##http_soup_export_symbols = -export-symbols $(http_soup_def_dependency)\
##  -no-undefined

#http_soup_la_DEPENDENCIES = $(http_soup_def_dependency)
#http_soup_la_CFLAGS = $(AM_CFLAGS) $(SOUP_CFLAGS)
#http_soup_la_LDFLAGS = $(AM_LDFLAGS) $(SOUP_LIBS)\
#  $(http_soup_export_symbols)

#http_soup_la_SOURCES = \
#  luax-callback.h\
#  http_soup.c\
#  $(NULL)

#stopwatch_def_dependency = stopwatch.def
#stopwatch_export_symbols = -export-symbols $(stopwatch_def_dependency)\
#  -no-undefined

stopwatch_la_DEPENDENCIES = $(stopwatch_def_dependency)
stopwatch_la_CFLAGS = $(AM_CFLAGS) $(GLIB_CFLAGS)
stopwatch_la_LDFLAGS = $(AM_LDFLAGS) $(GLIB_LIBS)\
  $(stopwatch_export_symbols)

stopwatch_la_SOURCES = \
  stopwatch.c\
  $(NULL)

#tcp_socket_def_dependency = tcp_socket.def
#tcp_socket_export_symbols = -export-symbols $(tcp_socket_def_dependency)\
#  -no-undefined

tcp_socket_la_DEPENDENCIES = $(tcp_socket_def_dependency)
tcp_socket_la_CFLAGS = $(AM_CFLAGS) $(GLIB_CFLAGS) $(GIO_CFLAGS)
tcp_socket_la_LDFLAGS = $(AM_LDFLAGS) $(GLIB_LIBS) $(GIO_LIBS)\
  $(tcp_socket_export_symbols)

tcp_socket_la_SOURCES = \
  luax-callback.h\
  tcp_socket.c\
  $(NULL)

all: all-am

.SUFFIXES:
.SUFFIXES: .c .lo .o .obj
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am $(top_srcdir)/build-aux/Makefile.am.common $(top_srcdir)/build-aux/Makefile.am.link $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --gnu nclua/event/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --gnu nclua/event/Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;
$(top_srcdir)/build-aux/Makefile.am.common $(top_srcdir)/build-aux/Makefile.am.link $(am__empty):

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure:  $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):

install-eventlibLTLIBRARIES: $(eventlib_LTLIBRARIES)
	@$(NORMAL_INSTALL)
	@list='$(eventlib_LTLIBRARIES)'; test -n "$(eventlibdir)" || list=; \
	list2=; for p in $$list; do \
	  if test -f $$p; then \
	    list2="$$list2 $$p"; \
	  else :; fi; \
	done; \
	test -z "$$list2" || { \
	  echo " $(MKDIR_P) '$(DESTDIR)$(eventlibdir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(eventlibdir)" || exit 1; \
	  echo " $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$list2 '$(DESTDIR)$(eventlibdir)'"; \
	  $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$list2 "$(DESTDIR)$(eventlibdir)"; \
	}

uninstall-eventlibLTLIBRARIES:
	@$(NORMAL_UNINSTALL)
	@list='$(eventlib_LTLIBRARIES)'; test -n "$(eventlibdir)" || list=; \
	for p in $$list; do \
	  $(am__strip_dir) \
	  echo " $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=uninstall rm -f '$(DESTDIR)$(eventlibdir)/$$f'"; \
	  $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=uninstall rm -f "$(DESTDIR)$(eventlibdir)/$$f"; \
	done

clean-eventlibLTLIBRARIES:
	-test -z "$(eventlib_LTLIBRARIES)" || rm -f $(eventlib_LTLIBRARIES)
	@list='$(eventlib_LTLIBRARIES)'; \
	locs=`for p in $$list; do echo $$p; done | \
	      sed 's|^[^/]*$$|.|; s|/[^/]*$$||; s|$$|/so_locations|' | \
	      sort -u`; \
	test -z "$$locs" || { \
	  echo rm -f $${locs}; \
	  rm -f $${locs}; \
	}

http_soup.la: $(http_soup_la_OBJECTS) $(http_soup_la_DEPENDENCIES) $(EXTRA_http_soup_la_DEPENDENCIES) 
	$(AM_V_CCLD)$(http_soup_la_LINK) $(am_http_soup_la_rpath) $(http_soup_la_OBJECTS) $(http_soup_la_LIBADD) $(LIBS)

stopwatch.la: $(stopwatch_la_OBJECTS) $(stopwatch_la_DEPENDENCIES) $(EXTRA_stopwatch_la_DEPENDENCIES) 
	$(AM_V_CCLD)$(stopwatch_la_LINK) -rpath $(eventlibdir) $(stopwatch_la_OBJECTS) $(stopwatch_la_LIBADD) $(LIBS)

tcp_socket.la: $(tcp_socket_la_OBJECTS) $(tcp_socket_la_DEPENDENCIES) $(EXTRA_tcp_socket_la_DEPENDENCIES) 
	$(AM_V_CCLD)$(tcp_socket_la_LINK) $(am_tcp_socket_la_rpath) $(tcp_socket_la_OBJECTS) $(tcp_socket_la_LIBADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT)

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/http_soup_la-http_soup.Plo
include ./$(DEPDIR)/stopwatch_la-stopwatch.Plo
include ./$(DEPDIR)/tcp_socket_la-tcp_socket.Plo

.c.o:
	$(AM_V_CC)$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(COMPILE) -c -o $@ $<

.c.obj:
	$(AM_V_CC)$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ `$(CYGPATH_W) '$<'`
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(COMPILE) -c -o $@ `$(CYGPATH_W) '$<'`

.c.lo:
	$(AM_V_CC)$(LTCOMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Plo
#	$(AM_V_CC)source='$<' object='$@' libtool=yes \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(LTCOMPILE) -c -o $@ $<

http_soup_la-http_soup.lo: http_soup.c
	$(AM_V_CC)$(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(http_soup_la_CFLAGS) $(CFLAGS) -MT http_soup_la-http_soup.lo -MD -MP -MF $(DEPDIR)/http_soup_la-http_soup.Tpo -c -o http_soup_la-http_soup.lo `test -f 'http_soup.c' || echo '$(srcdir)/'`http_soup.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/http_soup_la-http_soup.Tpo $(DEPDIR)/http_soup_la-http_soup.Plo
#	$(AM_V_CC)source='http_soup.c' object='http_soup_la-http_soup.lo' libtool=yes \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(http_soup_la_CFLAGS) $(CFLAGS) -c -o http_soup_la-http_soup.lo `test -f 'http_soup.c' || echo '$(srcdir)/'`http_soup.c

stopwatch_la-stopwatch.lo: stopwatch.c
	$(AM_V_CC)$(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(stopwatch_la_CFLAGS) $(CFLAGS) -MT stopwatch_la-stopwatch.lo -MD -MP -MF $(DEPDIR)/stopwatch_la-stopwatch.Tpo -c -o stopwatch_la-stopwatch.lo `test -f 'stopwatch.c' || echo '$(srcdir)/'`stopwatch.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/stopwatch_la-stopwatch.Tpo $(DEPDIR)/stopwatch_la-stopwatch.Plo
#	$(AM_V_CC)source='stopwatch.c' object='stopwatch_la-stopwatch.lo' libtool=yes \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(stopwatch_la_CFLAGS) $(CFLAGS) -c -o stopwatch_la-stopwatch.lo `test -f 'stopwatch.c' || echo '$(srcdir)/'`stopwatch.c

tcp_socket_la-tcp_socket.lo: tcp_socket.c
	$(AM_V_CC)$(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(tcp_socket_la_CFLAGS) $(CFLAGS) -MT tcp_socket_la-tcp_socket.lo -MD -MP -MF $(DEPDIR)/tcp_socket_la-tcp_socket.Tpo -c -o tcp_socket_la-tcp_socket.lo `test -f 'tcp_socket.c' || echo '$(srcdir)/'`tcp_socket.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/tcp_socket_la-tcp_socket.Tpo $(DEPDIR)/tcp_socket_la-tcp_socket.Plo
#	$(AM_V_CC)source='tcp_socket.c' object='tcp_socket_la-tcp_socket.lo' libtool=yes \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(tcp_socket_la_CFLAGS) $(CFLAGS) -c -o tcp_socket_la-tcp_socket.lo `test -f 'tcp_socket.c' || echo '$(srcdir)/'`tcp_socket.c

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs
install-dist_eventdataDATA: $(dist_eventdata_DATA)
	@$(NORMAL_INSTALL)
	@list='$(dist_eventdata_DATA)'; test -n "$(eventdatadir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(eventdatadir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(eventdatadir)" || exit 1; \
	fi; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_DATA) $$files '$(DESTDIR)$(eventdatadir)'"; \
	  $(INSTALL_DATA) $$files "$(DESTDIR)$(eventdatadir)" || exit $$?; \
	done

uninstall-dist_eventdataDATA:
	@$(NORMAL_UNINSTALL)
	@list='$(dist_eventdata_DATA)'; test -n "$(eventdatadir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	dir='$(DESTDIR)$(eventdatadir)'; $(am__uninstall_files_from_dir)

ID: $(am__tagged_files)
	$(am__define_uniq_tagged_files); mkid -fID $$unique
tags: tags-am
TAGS: tags

tags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	set x; \
	here=`pwd`; \
	$(am__define_uniq_tagged_files); \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: ctags-am

CTAGS: ctags
ctags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	$(am__define_uniq_tagged_files); \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"
cscopelist: cscopelist-am

cscopelist-am: $(am__tagged_files)
	list='$(am__tagged_files)'; \
	case "$(srcdir)" in \
	  [\\/]* | ?:[\\/]*) sdir="$(srcdir)" ;; \
	  *) sdir=$(subdir)/$(srcdir) ;; \
	esac; \
	for i in $$list; do \
	  if test -f "$$i"; then \
	    echo "$(subdir)/$$i"; \
	  else \
	    echo "$$sdir/$$i"; \
	  fi; \
	done >> $(top_builddir)/cscope.files

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags

distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(LTLIBRARIES) $(DATA) $(HEADERS) all-local
installdirs:
	for dir in "$(DESTDIR)$(eventlibdir)" "$(DESTDIR)$(eventdatadir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:
	-test -z "$(CLEANFILES)" || rm -f $(CLEANFILES)

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)
	-test -z "$(DISTCLEANFILES)" || rm -f $(DISTCLEANFILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
	-test -z "$(MAINTAINERCLEANFILES)" || rm -f $(MAINTAINERCLEANFILES)
clean: clean-am

clean-am: clean-eventlibLTLIBRARIES clean-generic clean-libtool \
	clean-local mostlyclean-am

distclean: distclean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am: install-dist_eventdataDATA \
	install-eventlibLTLIBRARIES

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am:

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-dist_eventdataDATA \
	uninstall-eventlibLTLIBRARIES

.MAKE: install-am install-strip

.PHONY: CTAGS GTAGS TAGS all all-am all-local check check-am clean \
	clean-eventlibLTLIBRARIES clean-generic clean-libtool \
	clean-local cscopelist-am ctags ctags-am distclean \
	distclean-compile distclean-generic distclean-libtool \
	distclean-tags distdir dvi dvi-am html html-am info info-am \
	install install-am install-data install-data-am \
	install-dist_eventdataDATA install-dvi install-dvi-am \
	install-eventlibLTLIBRARIES install-exec install-exec-am \
	install-html install-html-am install-info install-info-am \
	install-man install-pdf install-pdf-am install-ps \
	install-ps-am install-strip installcheck installcheck-am \
	installdirs maintainer-clean maintainer-clean-generic \
	mostlyclean mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool pdf pdf-am ps ps-am tags tags-am uninstall \
	uninstall-am uninstall-dist_eventdataDATA \
	uninstall-eventlibLTLIBRARIES

.PRECIOUS: Makefile


# Local Variables:
# mode: makefile
# End:

.PHONY: link-so
link-so:
	@for soname in $(LINK_SO); do\
	  if ! test -f $$soname; then\
	    rm -f $$soname;\
	    $(LN_S) .libs/$$soname $$soname;\
	  fi;\
	done

.PHONY: unlink-so
unlink-so:
	-for soname in $(LINK_SO); do\
	  rm -f $$soname;\
	done

all-local: link-so
clean-local: unlink-so

# Local Variables:
# mode: makefile
# End:
#$(def_dependency):
#	$(AM_V_GEN) (echo EXPORTS;\
#	echo luaopen_nclua_event_`echo "$@" | sed s/\.def//`) >$@

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
