#include<stdio.h>
#include<conio.h>
int main(){
    int num, k;
    printf("Enter a number: ");
    scanf("%d", &num);
    k = prime(num);
    if(k==1){
        printf("composite");
    }else{
        printf("Prime");
    }


    //add();

    return 0;
}
int prime(int x){
    int i, flag=0;
    for(i=2; i<x; i++){
        if(x%i==0){
            flag=1;
            break;
        }
    }
    return flag;

}



void add(){
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("SUM: %d", a+b);
    //return z;
}


