/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/

#include <stdio.h>

/*
int main()
{
    int i = 1;
    while(i <= 5)
    {
        int j = i;
        while(j >= 1)
        {
            printf("%d",j);
            j--;
        }
        printf("\n");
        i++;
    }
}
*/

/*
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/
int main()
{
    int i = 5;
    while(i >= 1)
    {
        int j = i;
        while (j >= 1)
        {
            printf("%d",j);
            j--;
        }
        printf("\n");
        i--;
    }
    return 0;
}
