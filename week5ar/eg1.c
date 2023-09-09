#include <stdio.h>
/*
int main()
{
    int arr[4] = {1,2,3,4};
    int i;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]);i++)
    {
        printf("%d\t",arr[i]);
    } 
    return 0;
}
*/

/*
int main()
{
    int arr[4] = {1,2};
    int i;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]);i++)
    {
        printf("%d\t",arr[i]);
    } 
    return 0;
}
*/

//output 1 2 0 0 as remaining elements are not being initialized.


//example 3
int main()
{
    int arr[] = {1,2};
    int i;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]);i++)
    {
        printf("%d\t",arr[i]);
    } 
    return 0;
}
// the output will be 1 2 because []
