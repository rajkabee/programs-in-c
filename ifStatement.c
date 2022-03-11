#include<stdio.h>
#include<conio.h>
void main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age<16){
        printf("You are a minor.");
    }
    else if(age<60){
            printf("You are an adult.");
    }
    else{
        printf("You are a senior citizen.");
    }


    getch();
}
