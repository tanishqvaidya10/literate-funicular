#include <stdio.h>

int main() {
    char toRead[100];
    FILE *fp = fopen("data2.txt","r");

    //to read line 1by1
    while(fgets(toRead,100,fp) != NULL){
        printf("%s",toRead);
    }

     fclose(fp);

     FILE *fp2 = fopen("output_file.txt","w");
     fputs(toRead,fp2);
     fputs("\n Just printed the last element read from the above list", fp2);
     fclose(fp2);
}