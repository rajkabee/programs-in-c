
#include<stdio.h>
#include<conio.h>
void main(){
    int num[] = {5,4,3,2,1};
    int i,j,k, temp;
    for(i=0;i<5; i++){
        printf("%d\t", num[i]);
    }
    for(i=0; i<4; i++){
        for(j=0; j<4-i; j++){
            if(num[j]>num[j+1]){
               /*
               temp = num[j];
               num[j] = num[j+1];
               num[j+1] = temp;
               */

            }
            printf("\n");
            for(k=0;k<5; k++){
                printf("%d\t", num[k]);
            }
        }
    }
    getch();
}


/*
a=5;12;7;
b=7;5;
a+=b;
b=a-b;
a-=b;


*/
