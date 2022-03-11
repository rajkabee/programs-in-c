

#include<stdio.h>
#include<conio.h>

void main(){
    int a,b,diff, temp;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);

    //swap if a<b
    if(b>a){
        /*
       temp = a;
       a=b;
       b=temp;
       */
       //without using third variable
       a=a+b;
       b=a-b;
       a=a-b;
    }

    diff = a-b;

    printf("\nDifference = %d", diff);
    getch();
}
