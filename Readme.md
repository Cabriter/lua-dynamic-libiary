* gcc -c mylibs.c `编译不链接`
* gcc -bundle -undefined dynamic_lookup -o libmylib.dylib mylibs.o `链接成动态库`
* lua test.lua `加载mac下的dylib，并调用`