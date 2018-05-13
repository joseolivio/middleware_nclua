#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <iostream>

int main()
{
	lua_state *L = luaL_newstate();

	luaL_openlibs(L);

	luaL_dofile(L, "ImHere.lua");
	lua_getglobal(L,"EstouAqui");

	lua_pushstring(L, "Hello (c)");

	lua_pcall(L, 1, 0, 0);

	lua_close(L);


	return 0;
	
}