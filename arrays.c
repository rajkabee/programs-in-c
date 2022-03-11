
#include<stdio.h>
#include<conio.h>
void main(){
    char name[25];
    int score[5]={67, 52, 78, 82, 74};
    int i;
    printf("Enter your name: ");
    scanf("%s", &name);

    printf("hello, %s.", name);
    for(i=0; i<5; i++ ){
        printf("%d\n", score[i]);
    }


    getch();
}
