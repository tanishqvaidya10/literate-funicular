#include <stdio.h>

int main() {

    struct student{
        int id;
        char name[20];
        float gpa;

    };

    // declaring variable 
    struct student s1 , s2;

    //another way combining structure definition and variables.
    struct book{
        int pages;
        char name[20];
    } book1 , book2;
    
    // we can omit the name but this can't be reused or 
    //we cannot declare more variables of the same data type.
    struct {
        int price;
        char name[20];
    } car1 , car2;
}