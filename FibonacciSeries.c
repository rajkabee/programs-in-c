#include<stdio.h>
#include<conio.h>
void main(){
    int n1=1, n2=1, n3;
    int range;
    printf("Enter the range of fibonacci series: ");
    scanf("%d",&range);

    printf("The Fibonacci series is: \n");
    while(n1<=range){
        printf("%d\n", n1);
        n3 = n1+n2;
        n1=n2;
        n2=n3;
    }



    getch();
}
