#include <stdio.h>
#define ROW 3
#define COL 3

int main() {
int m1[COL] [ROW] , m2 [COL] [ROW] ,m3 [COL] [ROW], i , j;

int row1,col1;
int row2,col2;

printf("Enter the num: ");
scanf("%d",&row1);

printf("Enter the num: ");
scanf("%d",&col1);

printf("Enter the num: ");
scanf("%d",&row2);

printf("Enter the num: ");
scanf("%d",&col2);

if (row1 != row2 || col1 != col2){
    printf("Invalid Input: addition not possible");
}

//taking input for M1

for(i = 0; i < row1;i++){
    for(j = 0; j < col1;j++){
       printf("Enter the number: ");
       scanf("%d",&m1[i][j]);

    }
}

//taking input for M2

for(i = 0; i < row2;i++){
    for(j = 0; j < col2;j++){
       printf("Enter the number: ");
       scanf("%d",&m2[i][j]);

    }
}

//addtion of M1 + M2
printf("Addition of two matrices is : \n");
for(i=0;i<row2;i++){
    for(j=0;j<col2;j++)
    {
        m3[i][j] = m1[i][j] + m2[i][j];
    }
}

//display new M3 matrix
for(i=0;i<row2;i++){
    for(j=0;j<col2;j++)
    {
        printf("%-3d ",m3[i][j]);
    }
    printf("\n");
}

return 0;

}