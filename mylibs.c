#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>
#include <string.h>

#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <limits.h>


#include <math.h>
#include "../lua-5.3.5/src/lua.h"
#include "../lua-5.3.5/src/lualib.h"
#include "../lua-5.3.5/src/lauxlib.h"


/*  库 open 函数的前置声明   */
int luaopen_mylib(lua_State *L);


static int l_sin (lua_State *L)
{
    double d = luaL_checknumber(L, 1);
    lua_pushnumber(L, sin(d));
//printf("ok now is  luahook!\n");
    return 1; /* number of results */
}


static const luaL_Reg mylib[] =
        {
                {"lsin", l_sin},
                {NULL, NULL} /* 必须以NULL结尾 */
        };


int luaopen_libmylib(lua_State *L)
{
    luaL_newlib(L, mylib);
    return 1;
}