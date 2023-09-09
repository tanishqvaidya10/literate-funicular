/*
Write a program to find the grade of a student given following marks system below.
90 - 100 =   A
80 - 90  =   B
70 - 80  =   C
60 - 70  =   D
< 60     =   F

*/
#include <stdio.h>
int main()
{
printf("Enter your marks: ");
int marks;
scanf("%d",&marks);


if (marks >= 90 && marks <=100)
{
printf("A\n");
}
else if (marks >= 80 && marks < 90)
{
printf("B\n");
}
else if (marks >= 70 && marks < 80)
{
printf("C\n");
}
else if (marks >= 60 && marks < 70)
{
printf("D\n");
}
else if (marks < 60)
{
printf("F\n");
}


return 0;
}
