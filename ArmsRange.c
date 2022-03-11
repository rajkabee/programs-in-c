#include<stdio.h>
#include<conio.h>


int digits(int num){
    int d=0;
    while(num%10>=1){
        num/=10;
        d++;
    }
    //printf("digits: %d\n", d);
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

void main(){

    int num, d, temp, arm, rem, range, count;
    printf("Enter the number of armstrong numbers: ");
    scanf("%d", &range);
    count=0;
    for(num=0; count<range; num++){
        temp = num;
        d=digits(num);
        arm=0;
        while(temp>=1){
            rem = temp%10;
            arm += power(rem,d);
            temp/=10;
        }
        if(arm==num){
            count++;
            printf("%d\n", arm);
        }

    }




    getch();
}
