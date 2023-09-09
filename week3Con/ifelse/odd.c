#include <stdio.h>

int main()
{
    printf("Enter the number: ");
    int num;
    scanf("%d",&num);

    if (num % 2 != 0)
      printf("Number is odd\n");
    
    else
    
      printf("Number is not odd\n");
}