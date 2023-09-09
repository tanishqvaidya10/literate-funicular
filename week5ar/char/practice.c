#include <stdio.h>
#include <ctype.h>

int main()
{
    int size, i = 0;
    char name[5];
    scanf("%c", &name[0]);

    while(name[i]!='\n')
    {
        i++;
        scanf("%c", &name[i]);
    }

    name[i+1]='\0';
    size = i;
    printf("\nName is %s",name);

    for(i=0; i<size; i++)
        printf("%c", toupper(name[i]));

    return 0;
}
