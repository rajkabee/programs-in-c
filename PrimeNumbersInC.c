#include<stdio.h>
#include<conio.h>
void main(){
    int num, flag;
    printf("Enter a number: ");
    scanf("%d", &num);
    flag = prime(num);
    if(flag==0){
        printf("Prime");
    } else{
        printf("Composite");
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
