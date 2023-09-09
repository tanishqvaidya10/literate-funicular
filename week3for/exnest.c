#include <stdio.h>
/*
#
# #
# # #
# # # #
*/
int main()
{
    int i  = 1; //rows
    for(i = 1; i <= 4; i++)
    {
        int j; //columns
        for(j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}