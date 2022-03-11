#include<stdio.h>
#include<conio.h>
void main(){
    int num[] = {1,2,3,4,5,6,7,8,9,10};
    int i,j;
    for(i=0; i<9; i++){
        for(j=i+1; j<10; j++){
            if(num[i]<num[j]){
                num[i]+=num[j];
                num[j]= num[i]-num[j];
                num[i]-=num[j];
            }
        }
    }
    for(i=0; i<10; i++){
        printf("%d\t", num[i]);
    }
    getch();
}
