#include <stdio.h>

int main(){
    char s1[100];
    char s2[100];

    int i = 0; 
    int j = 0;

    printf("enter the first string: ");
    scanf("%[^\n]s",s1); getchar(); 
    //getchar function in between two scanf statements- to eliminate new line character
    //to intefere with second scanf()

    printf("enter the second string: ");
    scanf("%[^\n]s",s2);

    while(s1[i++] != '\0'); i--;
     while(s2[j] != '\0')
       s1[i++] = s2[j++];
    
     s1[i] = '\0';

    printf("%s",s1);



}