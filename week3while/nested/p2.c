/*
5 4 3 2 1
5 4 3 2 
5 4 3
5 4
5
*/

//#include <stdio.h>
/*
int main()
{
    int n = 5;
    int i = n;
    while(i >= 1)
    {
        
        int j = i;
        int n = 5;
        while(j >= 1)
        {
          printf("%d",n);
          n--;
          j--;
        }
        printf("\n");
        i--;
    }
}
*/
/*
5
5 4
5 4 3 
5 4 3 2
5 4 3 2 1
*/

#include <stdio.h>

int main()
{
    printf("Enter the number: ");
    int n;
    scanf("%d",&n);

    int i = 1;
    while(i <= n)
    {
        int u = n;
        int j = i;
        while(j >= 1)
        {
            printf("%d",u);
            u--;
            j--;
        }
        printf("\n");
        i++;
    }
}
