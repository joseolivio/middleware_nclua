/* tests0.c -- Native functions used by Lua tests.lua.
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

#include <config.h>
#include <errno.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "aux-glib.h"
#include "aux-lua.h"
#include <cairo.h>

/*-
 * tests0.dir_exists (path:string) -> status:boolean
 *
 * Returns true if PATH points to a directory.
 */
static int
l_dir_exists (lua_State *L)
{
  const char *path;
  path = luaL_checkstring (L, 1);
  lua_pushboolean (L, g_file_test (path, G_FILE_TEST_IS_DIR));
  return 1;
}

/*-
 * tests0.file_exists (path:string) -> status:boolean
 *
 * Returns true if PATH points to a regular file.
 */
static int
l_file_exists (lua_State *L)
{
  const char *path;
  path = luaL_checkstring (L, 1);
  lua_pushboolean (L, g_file_test (path, G_FILE_TEST_IS_REGULAR));
  return 1;
}

/*-
 * tests0.get_monotonic_time () -> us:number
 *
 * Returns a monotonic time-stamp in microseconds.
 */
static int
l_get_monotonic_time (lua_State *L)
{
  gint64 us;
  us = g_get_monotonic_time ();
  lua_pushnumber (L, (lua_Number) us);
  return 1;
}

/*-
 * tests0.testudata (obj:userdata, tname:string) -> obj:userdata or nil
 *
 * Tests if object OBJ is a userdata of type TNAME.
 * Returns OBJ if successful, or nil otherwise.
 */
static int
l_testudata (lua_State *L)
{
  if (luaL_testudata (L, 1, luaL_checkstring (L, 2)))
    {
      lua_pushvalue (L, 1);
    }
  else
    {
      lua_pushnil (L);
    }
  return 1;
}

/*-
 * tests0.usleep (n:number)
 *
 * Pauses the current thread for N microseconds.
 */
static int
l_usleep (lua_State *L)
{
  lua_Integer us = luaL_checkinteger (L, 1);
  return (us <= 0) ? 0 : (g_usleep ((unsigned long) us), 0);
}

/* Maximum integer value generated by tests0.xrand.  */
#define XRAND0_LIMIT 65535      /* 2^16 - 1 */

/*-
 * tests0.xrand ([lower, upper:number, reset:boolean]) -> r:number
 *
 * Returns a pseudo-random integer X such that 0 <= M <= X < N <= MAX.
 * If LOWER is not given, assumes 0.
 * If UPPER is not given, assumes XRAND0_LIMIT.
 * If RESET is given, resets the seed.
 */
static int
xrand0 (int lower, int upper, int reset)
{
  static int seed = 0;
  int x;

  g_assert (lower < upper && upper <= XRAND0_LIMIT);
  seed = (reset) ? 12345 : seed * 1103515245 + 12345;
  x = (int) ((unsigned int) (seed / XRAND0_LIMIT) % XRAND0_LIMIT);

  return x % (upper - lower + 1) + lower;
}

static int
l_xrand (lua_State *L)
{
  int lower, upper, reset;

  lower = luaL_optint (L, 1, -XRAND0_LIMIT);
  upper = luaL_optint (L, 2, XRAND0_LIMIT);
  reset = lua_toboolean (L, 3);

  if (unlikely (!(lower < upper && upper <= XRAND0_LIMIT)))
    luaL_argerror (L, 1, "interval is empty");

  lua_pushinteger (L, xrand0 (lower, upper, reset));
  return 1;
}

/********************************* CAIRO **********************************/

/*-
 * tests0.cairo_check_version (major, minor, micro:number)
 *       -> status:boolean
 *
 * Returns true if cairo version is greater or equal than the given version.
 */
static int
l_cairo_check_version (lua_State *L)
{
  if (CAIRO_VERSION_MAJOR >= luaL_checkint (L, 1)
      && CAIRO_VERSION_MINOR >= luaL_optint (L, 2, 0)
      && CAIRO_VERSION_MICRO >= luaL_optint (L, 3, 0))
    {
      lua_pushboolean (L, TRUE);
    }
  else
    {
      lua_pushboolean (L, FALSE);
    }

  return 1;
}

/*-
 * tests0.cairo_get_version () -> major, minor, micro:number
 *
 * Returns the major, minor, and micro version of cairo.
 */
static int
l_cairo_get_version (lua_State *L)
{
  lua_pushinteger (L, CAIRO_VERSION_MAJOR);
  lua_pushinteger (L, CAIRO_VERSION_MINOR);
  lua_pushinteger (L, CAIRO_VERSION_MICRO);
  return 3;
}

/********************************* CANVAS *********************************/

/*-
 * tests0.canvas_insersect (x0, y0, w0, h0, x1, y1, w1, h1:number)
 *       -> x, y, w, h:number
 *
 * Returns the intersection of the given rectangles.
 */
static int
l_canvas_intersect (lua_State *L)
{
  cairo_region_t *region;
  cairo_rectangle_int_t r0;
  cairo_rectangle_int_t r1;
  cairo_status_t err;

  r0.x = luaL_checkint (L, 1);
  r0.y = luaL_checkint (L, 2);
  r0.width = luaL_checkint (L, 3);
  r0.height = luaL_checkint (L, 4);

  r1.x = luaL_checkint (L, 5);
  r1.y = luaL_checkint (L, 6);
  r1.width = luaL_checkint (L, 7);
  r1.height = luaL_checkint (L, 8);

  region = cairo_region_create_rectangle (&r0);
  g_assert_nonnull (region);
  err = cairo_region_status (region);
  if (unlikely (err != CAIRO_STATUS_SUCCESS))
    {
      goto error;
    }

  err = cairo_region_intersect_rectangle (region, &r1);
  if (unlikely (err != CAIRO_STATUS_SUCCESS))
    {
      cairo_region_destroy (region);
      goto error;
    }

  cairo_region_get_extents (region, &r0);
  cairo_region_destroy (region);
  lua_pushinteger (L, r0.x);
  lua_pushinteger (L, r0.y);
  lua_pushinteger (L, r0.width);
  lua_pushinteger (L, r0.height);
  return 4;

 error:
  lua_pushstring (L, cairo_status_to_string (err));
  return lua_error (L);
}

/*-
 * tests0.canvas_surface_equals (s1, s2:lightuserdata, epsilon:number)
 *       -> status:boolean, errmsg:string
 *
 * Returns true if s1 and s2 are equal (have the same content), otherwise
 * returns false.  If EPSILON is given, admit some difference in
 * EPSILON*100% of the pixels.
 */
static int
l_canvas_surface_equals (lua_State *L)
{
  cairo_surface_t *s1, *s2;
  unsigned char *p1, *p2;
  int h1, h2, st1, st2, i;
  int ndiff, maxdiff;

  s1 = (cairo_surface_t *) lua_touserdata (L, 1);
  s2 = (cairo_surface_t *) lua_touserdata (L, 2);
  g_assert_nonnull (s1);
  g_assert_nonnull (s2);
  if (s1 == s2)
    goto success;

  cairo_surface_flush (s1);
  cairo_surface_flush (s2);

  p1 = cairo_image_surface_get_data (s1);
  p2 = cairo_image_surface_get_data (s2);
  g_assert_nonnull (p1);
  g_assert_nonnull (p2);

  h1 = cairo_image_surface_get_height (s1);
  h2 = cairo_image_surface_get_height (s2);
  g_assert (h1 >= 0 && h2 >= 0);
  if (h1 != h2)
    {
      lua_pushfstring (L, "height mismatch (%d!=%d)", h1, h2);
      goto failure;
    }

  st1 = cairo_image_surface_get_stride (s1);
  st2 = cairo_image_surface_get_stride (s2);
  g_assert (st1 > 0 && st2 > 0);
  if (st1 != st2)
    {
      lua_pushfstring (L, "stride mismatch (%d!=%d)", st1, st2);
      goto failure;
    }

  ndiff = 0;
  for (i = 0; i < h1 * st1; i++)
    {
      if (p1[i] != p2[i])
        {
          ndiff++;
        }
    }

  maxdiff = (int) (CLAMP (luaL_optnumber (L, 3, 1), 0, 1) * h1 * st1 / 4);
  if (ndiff > maxdiff)
    {
      lua_pushfstring (L, "#%d mismatch%s (expected #%d)",
                       ndiff, (ndiff == 1) ? "" : "es", maxdiff);
      goto failure;
    }

 success:
  lua_pushboolean (L, TRUE);
  return 1;

 failure:
  lua_pushboolean (L, FALSE);
  lua_insert (L, -2);
  return 2;
}

static const struct luaL_Reg tests0_funcs[] = {
  {"cairo_check_version", l_cairo_check_version},
  {"cairo_get_version", l_cairo_get_version},
  {"canvas_intersect", l_canvas_intersect},
  {"canvas_surface_equals", l_canvas_surface_equals},
  {"dir_exists", l_dir_exists},
  {"file_exists", l_file_exists},
  {"get_monotonic_time", l_get_monotonic_time},
  {"testudata", l_testudata},
  {"usleep", l_usleep},
  {"xrand", l_xrand},
  {NULL, NULL}
};

int luaopen_tests0 (lua_State *L);

int
luaopen_tests0 (lua_State *L)
{
  G_TYPE_INIT_WRAPPER ();
  luaL_newlib (L, tests0_funcs);
  lua_pushinteger (L, XRAND0_LIMIT);
  lua_setfield (L, -2, "XRAND0_LIMIT");
  return 1;
}
