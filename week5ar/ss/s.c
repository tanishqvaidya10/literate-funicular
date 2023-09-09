#include <stdio.h>

void selectionsort(int arr[],int n)
{
    int i, j, min;
    for(i = 0; i < n - 1; i++) //one by one boundary of unsorted array
    {
        min = i; // min element in unsorted
        for(j=i+1;j<n;j++)
        {
            if(arr[j] < arr[min]) min = j;

        }
        //swap the min element  with the first element in unsoretd array
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;

    }
}

    int main()
    {
        int a[] = {24, 36, 20, 7, 42, 19};
        int size = sizeof(a) / sizeof(a[0]);
        selectionsort(a,size);
        return 0;
    }
