
#include<stdio.h>
#include<conio.h>
void main(){
    int a = 5;
    int b = 7;
    int c;
    c = a+b;
    c = b-a;
    c = b*a;
    c = b/a;
    printf("divident: %d\n", c);
    c = b%a;
    printf("Remainder: %d\n", c);
    a+=2;
    a-=3;
    a*=4;
    a/=5;

    printf("%d\n", a);
    a+=20;
    a%=5;
    printf("Remainder: %d\n", a);
    a++;
    printf("%d\n", a);
    a--;
    printf("%d\n", a);
    a=3;
    c=a++;
    printf("c=a++ ->%d\n", c);
    c=++a;
    printf("c=a++ ->%d\n", c);
    getch();





}
