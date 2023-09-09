#include <stdio.h>

int main() {
    char str1[80];
    char str2[80];

    int i , j;

    printf("enter the string: ");
    gets(str1);

    for(i = 0, j = 0; str1[i] != '\0'; i++){
        if(str1[i] != ' '){
            str2[j++] = str1[i];
        }

    }
    str2[j] = '\0';

    puts(str2); 
}