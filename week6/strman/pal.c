#include <stdio.h>

int main() {
    char str [80];
    int left, right, i, len, flag = 1;

    printf("enter a string: ");
    for(i = 0; (str[i]= getchar()) != '\n';++i);
    len = i - 1;
    for(left = 0,right = len; left < right; ++left,--right){

        if (str[left] != str[right]){

            flag = 0;
            break;

        }
    }
    if (flag)
          printf("\n String is palindrome");
    else
        printf("not");
    
}