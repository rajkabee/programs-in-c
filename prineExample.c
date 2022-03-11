#include<stdio.h>
#include<conio.h>
void main(){
    int n, i, rem, flag=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<2){
        printf("neither prime nor composite!");
    }
    else{
        for(i=2; i<(n+1)/2; i++){
            rem = n%i;
            if(rem==0){
                flag=1;
                break;
            }

        }
        if(flag==1){
            printf("Composite!");
        }
        else{
            printf("Prime!");
        }
    }
    getch();
}
