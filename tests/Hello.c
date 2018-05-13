#include "lua.h"
#include "lauxlib.h"

int main()
{
	// inicilizar o estado
	lua_State *L = luaL_newstate();
	// carregar s blibiotecas
	luaL_openlibs(L);
	luaL_dofile(L, "ImHere.lua");
	lua_getglobal(L, "var");


	return 1;
	/
}