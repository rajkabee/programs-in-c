#include<stdio.h>
#include<conio.h>
void main(){
    int i, res;
    for(i=0; i<10; i++){
        res =fib(i);
        printf("%d\n", res);
    }
    getch();
}

int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else
        return fib(n-1)+fib(n-2);
}
