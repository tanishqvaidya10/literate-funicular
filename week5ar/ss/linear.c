#include <stdio.h>

int main()
{
    int arr[10];
    int index;
    int key;
    for(int i = 0; i < 10;i++)
    {
        printf("enter the number: ");
        scanf("%d",&arr[i]);
    }
    printf("Enter the search element ");
    scanf("%d",&key);

    for(index = 0; index < 10;index++)
    {
        if (key == arr[index])
        {
            printf("element found at location %d",index);
        return index;
        }
       
    }
    printf("Element not found");

}