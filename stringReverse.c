#include<stdio.h>
#include<conio.h>
void main(){
    char str[20], rev[20];
    int length,i;
    printf("Enter a string: ");
    scanf("%s", &str);
    length = strLen(str);
    printf("Length: %d\n", length);
    rev[length]='\0';
    length--;
    i=0;
    while(length>=0){
        rev[i]=str[length];
        length--;
        i++;
    }

    printf("Reversed Stgring: %s", rev);
    getch();

}

int strLen(char str[20]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
