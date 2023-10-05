#include <stdio.h>
#define NUM 3

struct student{
    char id[5];
    char name[10];
    float gpa;
};

int main(){
    struct student list[NUM] = { 
        {"0","Tanishq",9.4},
        {"1","Messi",10.0},
        {"2","Ronaldo",8.5}
    };
    //printing names of students having gpa > 9.3
    for(int i = 0; i < NUM; i++ ){
        if (list[i].gpa > 9.3){
            printf("%s %f\n",list[i].name,list[i].gpa);
        }
    }
}