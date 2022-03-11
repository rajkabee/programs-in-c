#include<stdio.h>
#include<conio.h>
void main(){
    //char name[5]={'a','m','a','r','\0'};
    //int i;
    char name[50];
    printf("Enter your name: ");
    scanf("%s", &name);
    rev(name);

    //printf("Name: %s", name);

    /*
    for(i=0; i<4; i++){
        printf("%c", name[i]);
    }*/

    getch();
}
void rev(char str[50]){
    char rev[50];
    int n = count(str);
    int i;
    printf("the length of the string: %d", n);
    rev[n]='\0';
    n--;
    i=0;
    while(n>=0){
        rev[i]=str[n];
        n--;
        i++;
    }
    printf("reversed string: %s", rev);

}

int count(char str[50]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
