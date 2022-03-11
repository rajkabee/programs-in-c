#include<stdio.h>
#include<conio.h>
void main(){
    int i, j;
    i=0;
    while(i<8){
        j=0;
        while(j<i){
            printf("   ");
            j++;
        }
        j=0;
        while(j<8-i){
            printf("#  ");
            j++;
        }

        printf("\n");
        i++;
    }




    getch();
}
