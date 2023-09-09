#include <stdio.h>

int main()
{
    int nums[4];
    int i;
    for(i = 0;i < 4;i++)
    {
        printf("Enter the number: ");
        scanf("%d",&nums[i]);
    }
    int sum = 0;
    for(int i = 0; i < 4; i++)
    {
       sum += nums[i];
    }
    printf("sum of 4 numbers is %d\n",sum);
}