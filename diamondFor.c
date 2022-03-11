#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    for(i=0; i<8; i++){
        for(j=0; j<7-i; j++){
            printf("   ");
        }
        for(j=0; j<i+1; j++){
            printf("&  ");
        }
        for(j=0; j<i; j++){
            printf("&  ");
        }
        printf("\n");

    }


    getch();
}
