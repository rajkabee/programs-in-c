#include<stdio.h>
#include<conio.h>
void main(){
    int x=765389;
    int *p;
    p=&x;
    int a,b;

    printf("The value of x = %d.\n", x);
    printf("The address of x = %d.\n", &x);
    printf("The value of p = %d.\n", p);
    printf("The address of p = %d.\n", &p);
    printf("The value at the address pointed by p = %d.\n", *p);


    a=5;
    b=7;
    swap(&a,&b);
    printf("a= %d, b=%d\n", a, b);

    getch();
}

void swap(int *x, int *y){
    int z;
    z= *x;
    *x = *y;
    *y = z;
    getch();
}
