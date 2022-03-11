#include<stdio.h>
#include<conio.h>
union value{
    int age;
    float grade;
    char name[50];
};

void main(){
    union value v;
    v.age = 29;
    v.grade = 3.88;
    printf("age: %d", v.age);
    printf("grade: %f", v.grade);
    getch();
}
