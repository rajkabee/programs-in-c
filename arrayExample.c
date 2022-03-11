
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num[1000], sum=0;
    printf("Enter any three numbers: ");
    //scanf("%d%d%d", &num[0], &num[1], &num[2]);
    sum+=num[0]+num[1]+num[2];
    printf("Sum = %d", sum);
    return 0;
}
