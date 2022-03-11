#include<stdio.h>
#include<conio.h>
void main(){
    int num[] = {4,2,5,1,3};
    int i,j;
    for(i=0; i<5; i++){
        printf("%d\t", num[i]);
    }

    for(i=0; i<4; i++){
        for(j=i+1; j<5; j++){
            if(num[i]>num[j]){
                num[i]+=num[j];
                num[j]=num[i]-num[j];
                num[i]-=num[j];
            }
        }
    }
    printf("\nOutput in ascending order: \n");
    for(i=0; i<5; i++){
        printf("%d\t", num[i]);
    }

    getch();
}
