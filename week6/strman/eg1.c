#include <stdio.h>

int main() {
    int n = 0;
    char text [100];
    char c;
    while ((c = getchar()) !='\n' && n < 99){
        text[n++] = c;
    }
    text[n++] = '\0';

    printf("the length is %d",n);

}