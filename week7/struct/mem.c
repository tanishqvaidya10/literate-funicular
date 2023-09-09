#include <stdio.h>


int main() {

    struct student {
        char name[20];
        int id;
        float gpa;
    } s1 , s2;

    s1.id; // value stored in s1 of id
    s2.gpa; // value stored in s2 of gpa
}