#include<stdio.h>
#include<conio.h>
void main(){
    int n, i;
    for(n=2; n<11; n++){
        printf("\ntable for %d: \n", n);
        for(i=1;i<11;i++){

            printf("%d X %d = %d\n", n, i, n*i);
        }
    }
    getch();
}
