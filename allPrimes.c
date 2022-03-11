#include<stdio.h>
#include<conio.h>
void main(){
    int num, flag, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i=2; i<=num; i++){
        flag = prime(i);
        if(flag==0){
            printf("%d\n", i);
        }
    }

    getch();
}

int prime(int n){
    int f=0, i;
    for(i=2; i<n; i++){
        if(n%i==0){
            f=1;
            break;
        }
    }


    return f;
}

