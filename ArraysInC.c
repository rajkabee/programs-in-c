#include<stdio.h>
#include<conio.h>
void main(){
    int age[5]={45,34,27,65,22};
    char ch[5]={'a', 'e', 'i', 'o', 'u'};
    int i;
    age[3]=25;
    for(i=0; i<5; i++){
        printf("%d\t",age[i]);
        printf("%c\n",ch[i]);
    }
    getch();
}
