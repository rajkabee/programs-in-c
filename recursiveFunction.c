#include<stdio.h>
#include<conio.h>
void main()
{
    int val;
    int j;
    for(j=0; j<10; j++){
        val = fibonacci(j);
        printf("%d\n", val);
    }
    getch();
}
int fibonacci(int i){
    if(i<2){
        return i;
    }
    return fibonacci(i-1)+fibonacci(i-2);
}
