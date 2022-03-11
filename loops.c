#include<stdio.h>
#include<conio.h>
void main(){
    int i, j;          //iterator declaration
    i=0;            //initialization
    while(i<8){    //while(condition)
        j=0;
        while(j<7-i){
            printf(" \t");
            j++;
        }
        j=0;
        while(j<i+1){
            printf("*\t");
            j++;
        }
        j=0;
        while(j<i){
            printf("*\t");
            j++;
        }
        printf("\n\n");

        i++;        //iteration
    }



    getch();
}
