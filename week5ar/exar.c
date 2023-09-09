#include <stdio.h>

int main()
{
    int nums[2];
    int i;
    for(i = 0; i < 2; i++)
    {
        printf("enter : ");
        scanf("%d",&nums[i]);
    }
    
    for(i = 0; i < 2; i++)
    {
       printf("%d\n",nums[i]);
    }
    
}