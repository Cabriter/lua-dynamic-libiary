* gcc -c mylibs.c
* gcc -bundle -undefined dynamic_lookup -o libmylib.so mylibs.o
* lua test.lua