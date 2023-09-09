#include <stdio.h>

int main() {

    char text[30];
    printf("enter the string: ");
    scanf("%[^\n]s",text);

    printf("%s",text);
}