#include <stdio.h>

int main()
{
    printf("enter the number: ");
    int num;
    scanf("%d",&num);

    int i;
    int sum = 0;
    for(i = 1; i <= num; i++)
    {
        sum += i;
    }
    printf("%d\n",sum);
}