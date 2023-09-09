#include <stdio.h>
/*
int main()
{
    int arr[6];
    for(int i = 0; i < 6; i++)
    {
        arr[i] = i;
    }
    for(int i = 0; i < 6; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;

}
// output 0 1 2 3 4 5
*/

/**
int main()
{
    int arr[6];
    for(int i = 0; i < 6; i++)
    {
        arr[i] = i;
    }
    for(int i = 0; i < 9; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/
// output will 0 1 2 3 4 5 56909 40282 (junk values beyond the index)

/*
int main()
{
    int arr[6];
    for(int i = 0; i < 9; i++)
    {
        arr[i] = i;
    }
    for(int i = 0; i < 6; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/
//** stack smashing detected ***: terminated Aborted (core dumped)

int main()
{
    int arr[6] = {0};
    arr[6] = 1;
    
    for(int i = 0; i < 7; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
// Output 0 0 0 0 0 1 ** stack smashing detected ***: terminated Aborted (core dumped)
// run time error semantic fault.


