
#include<stdio.h>
#include<conio.h>

void main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age>=16 && age<60){
        printf("You are eligible for your citizenship...");
    }
    else if(age>=60){
        printf("You are already retired...");
    }
    else{
        printf("You are still a minor...");
    }


    getch();
}
