#include<stdio.h>
#include<conio.h>
void main(){
    int num, dig = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num%10>=1){
        dig++;
        num/=10;
    }
    printf("number of digits: %d", dig);


    getch();
}




