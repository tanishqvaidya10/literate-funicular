#include <stdio.h>

struct test {
    short a; //2b
    int b;   //4b
    char c;  //1b
} test;

int main() {
    printf("a= %lu\n",sizeof(test.a));
    printf("b= %lu\n",sizeof(test.b));
    printf("a= %lu\n",sizeof(test.c));


    //total size of test
    printf("%lu\n",sizeof(test));
}