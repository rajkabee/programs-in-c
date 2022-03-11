#include<stdio.h>
#include<conio.h>
int main(){
    calc();
    getch();
    return 100;
}

int add(int x, int y){
    int z;
    z = x+y;
    return z;
}

void output(int res){
     printf("Summation: %d", res);
}

int input(){
    int x;
    scanf("%d", &x);
    return x;
}

void calc(){
    int a,b,sum;
    printf("Enter two numbers: ");
    a=input();
    b=input();
    sum = add(a,b);
    output(sum);
}
