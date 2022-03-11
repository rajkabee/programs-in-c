#include<stdio.h>
#include<conio.h>
void main(){
    char ch;
    printf("Make a Choice: \n a. Americano \n b. Cafe Latte \n c. Cappuccino \n d. Hot Chocolate \n -");
    scanf("%c", &ch);

    switch(ch){
    case 'a':
        printf("Americano is served!");
        break;
    case 'b':
        printf("Cafe Latte is served!");
        break;
    case 'c':
        printf("Cappuccino is served!");
        break;
    case 'd':
        printf("Hot Chocolate is served!");
        break;
    default:
        printf("Invalid choice!");
    }


}
