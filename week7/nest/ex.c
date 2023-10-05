#include <stdio.h>

struct student {
    char name[20];
    int age;

    struct address {
        char city[20];
        int pin;
    } add1;
}s1;

//another way
struct address {
    char city[20];
    int pin;
};

struct student 
{
    char name[20];
    int age;
    struct address add1;
}s1;

/*
to access pincode then we have to type s1.add1.pin
*/

