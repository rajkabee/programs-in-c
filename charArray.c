#include<stdio.h>
#include<conio.h>
void main(){
    //char ch;
    //printf("Enter a character value: ");
    //scanf("%c", &ch);
    //ch = getchar();
    //ch = getch();
    //printf("input = %c", ch);

    char name[3][25];
    int i;
    printf("Enter your names: ");
    for(i=0; i<3; i++){
        scanf(" %s", &name[i]);
    }
    for(i=0; i<3; i++){
        printf("hello, %s...\n", name[i]);
    }

    getch();
}
