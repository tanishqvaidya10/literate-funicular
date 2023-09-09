#include <stdio.h>
#define SIZE 9

int avg (int n , int list[])
{ 
    int sum = 0;
    for(int i = 0; i < n;i++)
    {
        list[i] = list[i] * 2;
        sum = sum + list[i];
    }
    return sum/n;

}
int main()
{
    int arr[SIZE];
    for(int i = 0; i < SIZE; i++)
    {
        arr[i] = i;
        printf("%d",arr[i]);
    }
    int average;
    average = avg(SIZE,arr);
    printf("\nAverage is %d\n",average);
//after
    printf("After calling average: \n");
    for(int i = 0; i < SIZE;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;

}