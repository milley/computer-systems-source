#include <stdio.h>
#include <malloc.h>

int main()
{
    int *p = malloc(32);
    free(p);
    return(0);
}

/*
 *  compile interpositioning:
 *  gcc -DCOMPILETIME -c mymalloc.c
 *  gcc -I. -o intc int.c mymalloc.o
 *
 *  link interpositioning:
 *  gcc -DLINKTIME -c mymalloc.c
 *  gcc -c int.c
 *  gcc -Wl,--wrap,malloc -Wl,--wrap,free -o intl int.o mymalloc.o
 *
 *  runtime interpositioning:
 *  gcc -DRUNTIME -shared -fpic -o mymalloc.so mymalloc.c -ldl
 *  gcc -o intr int.c
 *  LD_PRELOAD="./mymalloc.so" ./intr
 */