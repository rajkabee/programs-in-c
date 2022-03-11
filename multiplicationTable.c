#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i;
    n=2;
    while(n<=10)
    {
        i=1;
        while(i<=10)
        {
            printf("%d X %d = %d\n", n, i, n*i);
            i++;
        }
        printf("\n\n");
        n++;
    }


    getch();
}
