#include <stdio.h>
#include <stdio.h>
#define NUM 4

typedef struct {
    int day;
    int month;
    int year;

}Date;

typedef struct {
    char name[20];
    int id;
    int marks[2];
    Date date;
} Student;

int main(){
    Student list[NUM] = {
        {"John",100,{60,70},{21,01,2021}},
        {"Ram",200,{75,92},{15,9,2020}},
        {"Francis",300,{85,68},{07,12,2020}},
        {"Gopal",400,{89,97},{12,04,2022}}
    };

    for(int i = 0; i < NUM;i++){
        /*float avg = (list[i].marks[0] + list[i].marks[1]) / 2.0;
        if (avg > 70)
          printf("\n %s %d %f \n",list[i].name,list[i].id,avg);
        */

        if (list[i].date.year >= 2020)
          printf("\n %s %d %d %d %d \n",list[i].name,list[i].id,list[i].date.day,list[i].date.month,list[i].date.year);
    }
    return 0;

}