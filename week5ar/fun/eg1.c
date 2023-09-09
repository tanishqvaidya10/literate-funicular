#include <stdio.h>
#define SIZE 9

int avg(int n, int list[])
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum = sum + list[i];
    return sum/n;
}

int main()
{
    int intArray[SIZE], average;
    for (int i = 0; i < SIZE; i++)
        intArray[i] = i;

    average = avg(SIZE, intArray);
    printf("Average=%d\n", average);
    return 0;
}

