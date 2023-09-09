#include <stdio.h>

int main() {
    char text[30];
    printf("Enter the string and terminate ~: ");
    scanf("%[^~]",text);

    printf("%s",text);
}