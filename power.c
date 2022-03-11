#include<stdio.h>
#include<conio.h>
void main(){
    int num, p, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the power value: ");
    scanf("%d", &p);
    result=1;
    while(p>=1){
        result*=num;
        p--;
    }
    printf("resultant: %d", result);



    getch();
}




