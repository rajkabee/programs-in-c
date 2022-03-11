
#include<stdio.h>
#include<conio.h>
void main(){
    char str[20];
    int len, i, flag=0, temp;

    printf("Enter a palindrome: ");
    scanf("%s", &str);
    len = 0;
    while(str[len]!='\0'){
        len++;
    }
    //printf("%d", len);
    temp=len;
    len--;
    for(i=0; i<=temp/2; i++){
        if(str[len]!=str[i]){
            flag=1;
            break;
        }
        len--;
    }
    if(flag==0){
        printf("palindrome");
    }
    else{
        printf("Not a palindrome");
    }

    getch();
}
