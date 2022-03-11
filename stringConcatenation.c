
#include<stdio.h>
#include<conio.h>
void main(){
    char str1[20], str2[20];
    int l1, l2,i;
    printf("Enter two strings: ");
    scanf("%s%s", &str1, &str2);
    l1 = strLen(str1);
    l2 = strLen(str2);
    i=0;
    while(i<=l2){
        str1[l1+i]=str2[i];
        i++;
    }

    printf("concatenated string : %s", str1);
    getch();

}

int strLen(char str[20]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
