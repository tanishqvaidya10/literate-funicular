#include <stdio.h>
#include <ctype.h>


int main()
{
    int size, i = 0;
    char name[4];
    name[0] = getchar();

    while(name[i]!='\n')
    {
        i++;
        name[i]=getchar();
    }

    name[i+1]='\0';
    size = i;
    printf("\nName is %s",name);

    for(i=0; i<size; i++)
        putchar(toupper(name[i]));

    return 0;
}