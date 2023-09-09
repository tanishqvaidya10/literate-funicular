#include <stdio.h>
int main()
{
    int i = 1;  // rows
    while(i <= 4)
    {
        int j = 1; // columns
        while (j <= 3)
        {
            printf("%d",j);
            j++;
        }
        printf("\n");
        i++;
    }
}