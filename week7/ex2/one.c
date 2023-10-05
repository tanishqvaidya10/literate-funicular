#include <stdio.h>
#define NUM 4

typedef struct {
    char name[20];
    int id;
    int marks[2];
} Student;

int main(){
    Student list[NUM] = {
        {"John",100,{60,70}},
        {"Ram",200,{75,92}},
        {"Francis",300,{85,68}},
        {"Gopal",400,{89,97}}
    };

    for(int i = 0; i < NUM;i++){
        float avg = (list[i].marks[0] + list[i].marks[1]) / 2.0;
        if (avg > 70)
          printf("\n %s %d %f \n",list[i].name,list[i].id,avg);
    }

}