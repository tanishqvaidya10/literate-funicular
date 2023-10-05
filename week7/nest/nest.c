#include <stdio.h>
#include <string.h>

struct address {
    char city[20];
    int pin;
};

struct student {
    char name[20];
    int age;
    struct address add1;
}s1;

int main() {
    strcpy(s1.name,"Tanishq");
    s1.age = 18;

    strcpy(s1.add1.city,"Pune");
    s1.add1.pin = 411033;

    printf("%s\n %d\n %s\n %d\n",s1.name,s1.age,s1.add1.city,s1.add1.pin);
}