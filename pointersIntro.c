#include<stdio.h>
#include<conio.h>

/*
void main(){

    int x=5;
    int *p;
    p=&x;
    printf("the value of x: %d\n", x);
    printf("the address of x: %d\n", &x);
    printf("the value of p: %d\n", p);
    printf("the address of p: %d\n", &p);
    printf("value at the address pointed by p: %d", *p);
}
*/
//void func(int *i);

void func(int *p){
    int temp;
    temp=(*p)+100;
    *p = temp;
    printf("in func: %d\n", *p);

}

void main(){
    int i=5;
    printf("in main: %d\n", i);
    func(&i);
    printf("in main: %d\n", i);
    getch();
}



