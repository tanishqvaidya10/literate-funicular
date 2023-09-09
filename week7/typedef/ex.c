#include <stdio.h>

typedef struct {
    float real;
    float img;
}COMPLEX;

COMPLEX num1, num2;
//simplifies the syntax and increases readibility of code.


/*
or without using typedef
*/

struct complex {
    float real;
    float img;
};

struct complex num1 , num2;