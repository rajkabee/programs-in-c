#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    //char name[50];
    //printf("What is your name?");
    //scanf("%s", &name);
    //scanf("%[^\n]s", &name);
    //printf("%s", name);
   /* int l1,l2;
    char str1[20], str2[20];
    strcpy(str1, "Saurav");
    strcpy(str2, "Acharya");
    l1 = 0;
    while(str1[l1]!='\0'){
        l1++;
    }
    //printf("%d", l1);
    l2=0;
    while(str2[l2]!='\0'){
        str1[l1]=str2[l2];
        l1++;
        l2++;
    }
    str1[l1]='\0';
    //strcat(str1, str2);
    printf("%s", str1);

    */
    int l,i;
    char string[20], rev[20];
    strcpy(string, "gaurav");
    l = strlen(string);
    rev[l]=string[l];
    l--;
    i=0;
    while(l>=0){
        rev[i]=string[l];
        i++;
        l--;
    }
    printf("%s", rev);

    getch();
}
