#include<stdio.h>
#include<conio.h>
void main(){

    int num, d, temp, arm, rem;
    printf("Enter a armstrong number: ");
    scanf("%d", &num);
    temp = num;
    d=digits(num);
    arm=0;
    while(temp>=1){
        rem = temp%10;
        arm += power(rem,d);
        temp/=10;
    }
    printf("arm: %d\n", arm);
    if(arm==num){
        printf("the number is a Armstrong number.");
    }else{
        printf("the number is not a Armstrong number.");
    }


    getch();
}
//input:153

int digits(int num){
    int d=0;
    while(num%10>=1){
        num/=10;
        d++;
    }
    printf("digits: %d\n", d);
    return d;
}

int power(int num, int p){
    int result=1;
    while(p>0){
        result*=num;
        p--;
    }
    return result;
}
