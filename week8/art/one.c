#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;
    int  *q = p+1;
    printf("%p",p); //1000
    //printf("%p",q); //1004

    //now 
    q = p + 4;
    // p + 4 * (size of int);
    printf("%p",q);

}