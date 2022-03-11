#include<stdio.h>
#include<conio.h>
void main(){
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = factorial(n);
    printf("result: %d", result);
    getch();
}

int factorial(int x){
    int i, res=1;
    for(i=1; i<=x; i++){
        res*=i;
    }
    return res;

}

