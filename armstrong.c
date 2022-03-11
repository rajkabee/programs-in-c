#include<stdio.h>
#include<conio.h>
void main(){
    int arm, dig, res=0, temp, temp2;
    printf("Enter a armstrong number: ");
    scanf("%d", &arm);
    dig = digit(arm);
    printf("digits: %d\n", dig);

    while(arm%10>=1){
        temp = arm%10;
        printf("dig = %d\n", dig);
        temp = pow(temp, dig);
        printf("%d\n", temp);
        arm/=10;
    }
    printf("%d", res);


    getch();
}


int pow(int num, int p){
    int r=1;
    for(; p>0; p--){
        r*=num;
    }
    printf("num=%d, p=%d,r=%d\n", num, p,r );
    return r;
}
int digit(int num){
    int dig=0;
    while(num%10>=1){
        dig++;
        num/=10;
    }
    return dig;
}

