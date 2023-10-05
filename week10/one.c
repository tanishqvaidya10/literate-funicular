#include <stdio.h>
#include <string.h>
int main() 
{
    char toRead[100];
    FILE* fp = fopen("data.txt", "r");
    fgets(toRead, 100, fp);
    fclose(fp);
    char s_temp[] = "How";
    char* p = strstr(toRead, s_temp);
    if(p) 
    {
        printf("\nString is found\n");
        printf("First occurrence of string %s in %s is %s\n",s_temp,toRead, p);
    } 
    else 
    {
        printf("\nString is not found\n");
    }
    return 0;
}