#include <stdio.h>
#define SIZE 9


int avg(int n, int list[]){
    int sum = 0;
    for(int i = 0; i < n; i++){
        list[i] = list[i] * i;
        sum += list[i];
    }
    return sum/n;

}

int main(){
    int nums[SIZE];
    int i;
    for(i = 0; i < SIZE;i++){
        nums[i]  = i;
        printf("%d",nums[i]);
    }

    int avg_nums = avg(SIZE,nums);
    printf("\nAverage is %d",avg_nums);

    //after calling average:
    printf("\nAfter calling avg\n");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d\t",nums[i]);
    } 
    return 0;
}