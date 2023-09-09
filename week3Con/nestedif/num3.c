#include <stdio.h>

int main()
{
    printf("Enter a number: ");
    int num1 , num2 , num3;
    scanf("%d %d %d",&num1, &num2, &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("num1 is greater %d\n",num1);
        }
        else
        {
            printf("num3 is greater %d\n",num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("num2 is greater %d",num2);
        }
        else
        {
          printf("num3 is greater %d\n",num3);
        }
    }
    return 0;
}