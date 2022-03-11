#include<stdio.h>
#include<conio.h>
void main(){
    int age;
    char ch='q';
    float f=1.234;
    double d=3.456;

    printf("How old are you? ");
    scanf("%d", &age);
    printf("You are %dyears old.", age);
    getch();
}
