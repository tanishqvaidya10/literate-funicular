#include <stdio.h>
#include <stdlib.h>

/*
void fun1() {
    int *pt = (int *) malloc(sizeof(int));
}
*/
#define MAX_SIZE 10
//example creating a dynamic allocated array
void fun2() {
    int *arr = (int *)malloc(MAX_SIZE *sizeof(int));
    // 10 * 4 = 40 bytes of memeory is allocated. this is treated as single entity.
}
