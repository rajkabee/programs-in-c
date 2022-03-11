#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i, flag=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num==1 || num==0){
        printf("Neither prime nor composite.");
    }
    else{
        i=2;
        while(i<num){
            if(num%i==0){
                //composite
                flag=1;
                break;
            }
            printf("%d\t", i);
            i++;
        }
    }
    if(flag==0){
        printf("prime");
    }
    else{
        printf("composite");
    }


    getch();
}
