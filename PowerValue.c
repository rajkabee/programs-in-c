#include<stdio.h>
#include<conio.h>
//#include<math.h>
int main(){
    int num, p, result;
    printf("Enter the base: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &p);
    //result = pow(num, p);
    result = power(num,p);
    printf("result: %d", result);

    getch();
    retun 0;
}
int power(int n, int p){
        int res = 1;
        while(p>0){
            res*=n;
            p--;
        }
        return res;
}
