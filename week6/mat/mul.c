#include <stdio.h>
#define row1 4
#define col1 3

#define row2 3
#define col2 4

#define row3 4
#define col3 4

int main() {

    int m1[row1][col1] ,m2[row2][col2], m3[row3][col3];
    int i , j , k;


//taking input for M1
for(i = 0; i < row1;i++){
    for(j = 0; j < col1;j++){
       printf("Enter the number: ");
       scanf("%d",&m1[i][j]);

    }
    printf("\n");
}

//taking input for M2
for(i = 0; i < row2;i++){
    for(j = 0; j < col2;j++){
       printf("Enter the number: ");
       scanf("%d",&m2[i][j]);

    }
    printf("\n");
}

if (col1 != row2){
    printf("Ivalid input: multiplication not possible");
}

//code for multiplication of M1 and M2
for(i = 0; i < row1;i++){
    for(j = 0; j < col2;j++)
    {
        m3[i][j] = 0;
        for(k = 0; k < col1;k++)
        {
            m3[i][j] += m1[i][k] * m2[k][j];
        }
    }
    printf("\n");
}

//display new M3 matrix
for(i=0;i<row3;i++){
    for(j=0;j<col3;j++)
    {
        printf("%d ",m3[i][j]);
    }
    printf("\n");
}

}