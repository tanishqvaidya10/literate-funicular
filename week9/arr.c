#include <stdio.h>
#include <stdlib.h>

int main() {
    int  *p , * q, i;

    p = (int*) malloc(5*sizeof(int));

    q = p;
    for(int i = 0; i < 5;i++){
        *p = i * i;
        p++;
    }
    for(int i = 0; i < 5; i++){
        printf("Element at index %d is %d\n",i,q[i]); 
        //both are valid
        //printf("Element at index %d is %d\n",i,*(q + i)); 

    }
}