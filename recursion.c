#include<stdio.h>
#include<conio.h>
void main(){
    rec(5);
    getch();
}

void rec(int n){
    printf("%d",n);
    if(n>1){
        rec(n-1);
    }
}
