#include<stdio.h>
#include<conio.h>
void main(){
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    i=1;
    while(i<11){
        printf("%d X %d = %d\n", n, i, n*i);
        i++;
    }
    getch();
}
