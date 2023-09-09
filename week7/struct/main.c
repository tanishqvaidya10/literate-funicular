#include <stdio.h>
//declare the struct before main so it can be accessible anywhere below.

struct student {
        char name[20];
        int marks[2];

    } s1 ,s2;

int main() {

    printf("Enter student1 name: ");
    scanf("%s",s1.name);
    printf("Name of studen1 : %s %c\n",s1.name , s1.name[0]);
    s1.marks[0] = 95;
    s1.marks[1] = 90;

    s2 = s1; //assigning s2 to s1
    printf("\nStudent 2 : %s %d %d\n",s2.name, s2.marks[0],s2.marks[1]);
}