#include <stdio.h>
#define N 2 // total students

int main()
{
   int students = 1;
   float avg;
   while(students <= N)
   {
    int subject = 1;
    int marks;
    int total_marks = 0;
    while(subject <= 3)
    {
        printf("\nEnter your marks: ");
        scanf("%d",&marks);
        total_marks += marks;
        subject++;

    }
    avg = total_marks / 3.0;
    printf("Average of student %d is %f\n",students,avg);
    students++;
   }
}