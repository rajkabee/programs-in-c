
#include<stdio.h>
#include<conio.h>
void main(){
    int num, rev, rem, temp;
    printf("Enter a number to be reversed: ");
    scanf("%d", &num);
    temp=num;
    while(num>0){
        rem = num%10;
        rev = rev*10+rem;
        num/=10;
    }
    printf("Reversed number: %d.\n", rev);
    if(temp==rev){
        printf("Is a Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }

    getch();
}
