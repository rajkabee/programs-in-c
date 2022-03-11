#include<stdio.h>
#include<conio.h>
void main(){
    int num,i,flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num<2){
        printf("The number %d id neither prime nor composite.", num);
    }
    else{
       i=2;
       while(i<=(num/2)){
        if(num%i==0){
            flag=1;
            break;
        }
        i++;
       }

       if(flag==1){
            printf("Composite\n");
        }
        else{
            printf("Prime\n");
        }
    }





    getch();
}
