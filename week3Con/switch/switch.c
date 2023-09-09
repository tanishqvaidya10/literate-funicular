/*
Write a program to check whether the entered character is a vowel or not.

*/
#include <stdio.h>
int main()
{
printf("Enter the the character: ");
char ch;
scanf("%c",&ch);


if (ch >= 'A' && ch <= 'Z')
{
ch+=32;
}
if(!(ch >= 'a' && ch <= 'z'))
{
printf("Not a Character\n");
return 0;
}


switch(ch)
{
case 'a' :
case 'e' :
case 'i' :
case 'o' :
case 'u' :
printf("vowel");
break;
default : printf("Not a Vowel");
}
return 0;
}
