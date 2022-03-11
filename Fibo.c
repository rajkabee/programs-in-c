
#include<stdio.h>
#include<conio.h>
void main(){
    int n1=0, n2=1, n3, range;
    printf("Enter the range: ");
    scanf("%d", &range);
    while(n1<=range){
        printf("%d\n",n1);
        n3 = n1+n2;
        n1=n2;
        n2=n3;
    }

    getch();
}
