#include <stdio.h>

struct student {
    char name[20];
    float cgpa;
    float marks[3];
};

struct student s[3];

int main()
{
    printf("Enter the details:\n");

    for (int i = 0; i < 3; i++) {
        printf("enter your name: ");
        scanf("%s",s[i].name);

        printf("enter your cgpa: ");
        scanf("%f",&s[i].marks);

        for(int j = 0; j < 3;j++)
        {
            printf("Enter marks: ");
            scanf("%f",&s[i].marks[j]);
        }
    }

    printf("%f",s[1].marks[0]);
}