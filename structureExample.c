#include<stdio.h>
#include<conio.h>
struct value{
    int age;
    float grade;
    char name[50];
};

void main(){
    struct value v;
    v.age = 29;
    v.grade = 3.88;
    strcpy(v.name, "Niharika");
    printf("age: %d\n", v.age);
    printf("grade: %f\n", v.grade);
    printf("name: %s\n", v.name);
    getch();
}
