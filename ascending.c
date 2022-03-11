#include<stdio.h>
#include<conio.h>
void main()
{
    int num[] = {7,4,9,1,5,2,8,3,6};
    int i,j,k;

    for(i=0; i<9; i++)
    {
        printf("%d, ",num[i]);
    }
    printf("\n");
    for(j=0; j<8; j++)
    {
        for(i=0; i<8-j; i++)
        {
            if(num[i]>num[i+1])
            {
                num[i]+=num[i+1];
                num[i+1] = num[i]-num[i+1];
                num[i]-=num[i+1];
            }

        }
    }

    for(i=0; i<9; i++)
    {
        printf("%d, ",num[i]);
    }
    getch();
}
