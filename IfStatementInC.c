#include<stdio.h>
#include<conio.h>
void main(){
    char ch;
    printf("Make a Choice: \n a. Americano \n b. Cafe Latte \n c. Cappuccino \n d. Hot Chocolate \n -");
    scanf("%c", &ch);
    if(ch=='a'){
        printf("Americano is served!");
    }
    else if(ch=='b'){
        printf("Cafe Latte is served!");
    }
    else if(ch=='c'){
        printf("Cappuccino is served!");
    }
    else if(ch=='d'){
        printf("Hot Chocolate is served!");
    }
    else{
        printf("Invalid choice!");
    }


    getch();
}
