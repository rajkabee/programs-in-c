#include<stdio.h>
#include<conio.h>
void main(){
    int num;
    printf("Enter a day in number: ");
    scanf("%d", &num);
    switch(num){
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    default:
        printf("Invalid Input...");
    }
    getch();
}
