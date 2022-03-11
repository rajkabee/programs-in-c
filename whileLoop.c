#include<stdio.h>
#include<conio.h>
void main(){
    int i;
    /*
    i=1;    //initialization
    while(i<5){ //while(condition)
        printf("Hello World!\n");
        i++;    //iteration
    }
    */
    int num, flag=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    i=2;
    while(i<num){
        if(num%i==0){
            //composite
            flag=1;
        }
        i++;
    }

    if(flag==0){
        printf("prime");
    }else{
        printf("Composite");
    }
    getch();
}
