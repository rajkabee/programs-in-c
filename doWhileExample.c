#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    int n, i, r;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        for(i=1; i<11; i++)
        {
            r=n*i;
            printf("%d X %d = %d\n", n, i, r);
        }
        printf("Do you want to continue?(y/n)");
        do
        {
            printf("-");
            scanf(" %c", &ch);
        }
        while(!(ch=='y'||ch=='Y'||ch=='n'||ch=='N'));
    }
    while(ch=='y'||ch=='Y');
    getch();
}
