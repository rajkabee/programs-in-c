#include<stdio.h>
#include<conio.h>
void main(){
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = sum(n);
    printf("result: %d", result);
    getch();
}

int sum(int x){
    int i, res=0;
    for(i=1; i<=x; i++){
        res+=i;
    }
    return res;

}
