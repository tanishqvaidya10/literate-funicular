#include <stdio.h>
#define N 4

int main()
{
    int i = 1;
    int sum = 0;
    while (i <= N)
    {
        sum = sum + i;
        printf("%d\n",sum);
        i++;
    }
    return 0;
}

/*
to print total sum = 10
int main()
{
    int i = 1;
    int sum = 0;
    while (i <= N)
    {
        sum = sum + i;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}
*/