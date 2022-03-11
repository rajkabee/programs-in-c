#include<stdio.h>
#include<conio.h>
void main(){
    int i;
    //i=10;
    do{
        printf("transaction\n");



        printf("Enter a number less than 5 to repeat: ");
        scanf("%d", &i);
    }while(i<5);

    getch();
}
