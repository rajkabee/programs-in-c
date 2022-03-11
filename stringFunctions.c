#include<stdio.h>
#include<conio.h>
void main(){
    char str1[20], str2[20];
    int i;

    printf("Enter a string: ");
    scanf("%s", &str1);

    for(i=0; i<20; i++){

        if(str1[i]!='\0'){
            str2[i]=str1[i];
        }
        else{
            str2[i]='\0';
            break;
        }

    }
    i=0;
    while(str1[i]!='\0'){
        i++;
    }

    for(i=0; str1[i]!='\0'; i++){
        printf("ascii value of %c is %d. \n", str1[i], str1[i] );
        str1[i]-=32;
    }
    printf("string2: %s\n", str2);
    printf("length of the string: %d", i);
    printf("string1 uppercase: %s", str1);



    getch();
}
