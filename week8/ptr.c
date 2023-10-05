#include <stdio.h>

int main(){
    int a  = 5;
    //printf("%p",&a); // address of memory

    int * ptr;
    ptr = &a;
    //printf("%d",* ptr); // * derefrence value operator

    //now lets 
    a = 7;
    printf("%d",* ptr);
    printf("%p",&a);
}