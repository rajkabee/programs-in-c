#include<stdio.h>
#include<conio.h>
void main(){
    int choice;


    printf("Enter your choice: \n1. Samosa\n2. Chomein\n3. Momo\n-");
    scanf("%d", &choice);
    switch (choice){
    case 1:
        printf("Samosa is served.");
        break;
    case 2:
        printf("Chowmein is served.");
        break;
    case 3:
        printf("Momo is served.");
        break;
    default:
        printf("Invalid choice!");

    }


    getch();
}
