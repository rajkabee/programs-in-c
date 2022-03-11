#include<stdio.h>
#include<conio.h>
int power(int, int );
int digits(int);

void main(){
    int num, dig, arm, temp, rem;
    printf("Enter a armstrong number: ");
    scanf("%d", &num);
    temp = num;
    dig = digits(num);
    printf("digits: %d", dig);
    while(num>=1){
        printf("%d\n", num);
        rem = num%10;
        arm += power(rem, dig);
        num/=10;
    }
    printf("%d %d", arm, temp);

    if(arm == temp){
        printf("Armstrong number!");
    }
    else{
        printf("Not a armstrong number!");
    }
    getch();
}

int digits(int num){
    int d = 0;
    while(num%10>=1){
        d++;
        num/=10;
    }
    return d;

}

int power(int num, int p){
    int res = 1;
    while(p>0){
        res*=num;
        p--;
    }
    return res;
}
