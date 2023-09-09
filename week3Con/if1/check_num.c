#include <stdio.h>

int main()
{
    printf("Enter the number: ");
    int num;
    scanf("%d",&num);

    if (num > 0)
     printf("Number is positive\n");
    if (num < 0)
     printf("Number is negative\n");
}