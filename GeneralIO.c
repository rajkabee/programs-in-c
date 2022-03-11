#include<stdio.h>
#include<conio.h>
void main(){
    int age;
    char choice;
    float percentage = 78.567f;
    /*
        printf("Enter your age: ");
        scanf("%d", &age);
        printf("you are %dyears old.", age);
    */

    printf("Make a choice: \na. Americano\nb. Cafe\t\t\t\tLatte \nc. Cappuccino \nd. Mochaccino\n-");
    scanf(" %c", &choice);
    //printf("Your choice is %c.", choice);

   // printf("percentage : %.1f", percentage);

    if(choice=='a'|| choice=='e'){
        printf("Americano is Served!");
    }

    getch();
}
