#include <stdio.h>

int main()
{
    printf("Enter a positive integer: ");
    int num;
    scanf("%d",&num);

    while(num <= 0)
    {
        printf("Enter a positive integer: ");
        scanf("%d",&num);
    }
    printf("%d\n",num);
    return 0;
}