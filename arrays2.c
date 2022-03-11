#include<stdio.h>
#include<conio.h>
void main(){
    int num[5]={7, 5, 3, 9, 6};

    int i, j;

    for(j=0; j<4; j++){
        for(i=0; i<4-j; i++){
            if(num[i]>num[i+1]){
                //swap
                num[i]+=num[i+1];
                num[i+1]=num[i]-num[i+1];
                num[i]-=num[i+1];
            }
        }
    }

    for(i=0; i<5; i++){
        printf("%d\t", num[i]);

    }
    getch();



}
