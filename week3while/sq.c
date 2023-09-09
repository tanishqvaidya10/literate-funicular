#include <stdio.h>

int main()
{
    printf("Enter the number: ");
    int num;
    scanf("%d",&num);

    int i = 1;
    int sq;
    while(i <= num)
    {
        sq = i * i;
        printf("%d\n",sq);
        i++;
    }
   return 0;
   // printf("%d\n",sq); outside while loop to print just one num square.
}