
#include<stdio.h>
#include<conio.h>
void main(){
    int n1=0, n2=1, n3, num, fact=1;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(n1<=num){
        printf("%d\n", n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }

    getch();
}
