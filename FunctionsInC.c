#include<stdio.h>
#include<conio.h>

int prime(int num){
    int flag=0;
    int i;
    for(i=2; i<num; i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }

    return flag;
}

void main(){
    int n, f, p, q;
    printf("Enter a number: ");
    n = getnum();
    if(n==0||n==1){
        nether();
    }
    else{
        f=prime(n);
    }

    if(f==0){
        printf("prime");
    }else{
        printf("Composite");
    }
    printf("Enter two numbers: ");
    p=getnum();
    q=getnum();
    p= sum(p,q);
    printf("sum: %d",p);
    getch();
}
void nether(){
    printf("The number is neither prime nor composite. ");
}

int getnum(){
    int a;
    scanf("%d", &a);
    return a;
}
int sum(int a, int b){
    int c;
    c=a+b;
    return c;
}
