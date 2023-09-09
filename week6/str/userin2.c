#include <stdio.h>

int main() {

    char text[30];
    printf("enter the string: ");
    scanf("%[a-z]s",text);

    printf("%s",text);
}