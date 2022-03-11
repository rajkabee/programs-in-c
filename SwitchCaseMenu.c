#include<stdio.h>
#include<conio.h>
void main(){
    char choice;
    printf("Make a choice: \na.Americano\nb.Cafe Latte\nc.Cappuccino\nd.Mochaccino\n-");
    scanf("%c", &choice);
    switch(choice){
    case 'a':
        printf("Amaricano is served!");
        break;
    case 'b':
        printf("Cafe Latte is served!");
        break;
    case 'c':
        printf("Cappuccino is served!");
        break;
    case 'd':
        printf("Mochaccino is served!");
        break;
    default:
        printf("Invalid choice!");
    }
    getch();
}
