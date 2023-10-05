#include <stdio.h>

typedef struct {
    float real;
    float img;
}complex;

complex add(complex x , complex y){
    complex t;

    t.real = x.real + y.real;
    t.img = x.img + x.img;
    return t;
}

int main() {
  complex a,b,c;

  scanf("%f %f",&a.real,&a.img);

 
  scanf("%f %f",&b.real,&b.img);

  c = add(a,b);
  printf("\n %f %f",c.real, c.img);
  
}