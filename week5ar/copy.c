#include <stdio.h>

int main()
{
    int old_value [5] = {10,20,30,40,50};
    int new_value[5];
    for(int i = 0; i < 5; i++)
    {
         new_value[i]= old_value[i];
        
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t",new_value[i]);
        
    }
    return 0;
}

/* another way
int old_value[5] = {10,20,30,40,50};
int new_value[sizeof(old_value)/sizeof(old_value[0])];


for(int i = 0; i < sizeof(old_value)/sizeof(old_value[0]); i++)
    new_value[i] = old_value[i];
*/