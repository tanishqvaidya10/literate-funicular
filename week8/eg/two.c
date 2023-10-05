#include <stdio.h>

int main() {
    float v = 3.14;
    float *pv = &v;
    v = v * 2;
    //printf("%f",*pv);
    *pv = 3.14;
    //printf("%f",v);
    printf("%f\n",*(&v)); //We can dereference the address of a to access its value.



    

}