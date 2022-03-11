
#include<stdio.h>
#include<conio.h>
void main(){
    int i=0, j=0;
    while(i<8){
        j=0;
        while(j<8-i){
            printf("  ");
            j++;
        }
        j=0;
        while(j<i+1){
            printf("* ");
            j++;
        }
        j=0;
        while(j<i){
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    i=0;
    while(i<7){
        j=0;
        while(j<i+2){
            printf("  ");
            j++;
        }
        j=0;
        while(j<7-i){
            printf("* ");
            j++;
        }
        j=0;
        while(j<6-i){
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    getch();
}
