#include<stdio.h>
#include<conio.h>
void main(){
    int age;
    printf("How old are you?");
    scanf("%d", &age);
    //printf("you are %d years old!", age);

    if(age<18){
        printf("You are a minor.");
        printf("acasfasgvasva");

    }

    else if(age<60){
        printf("You are an adult.");
    }
    else{
        printf("You are a senior citizen.");
    }


    getch();
}
