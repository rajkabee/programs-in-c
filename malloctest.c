
#include<stdio.h>
#include<conio.h>
void main(){
    int n, *ptr, i;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n*(sizeof(int)));

    for(i=0; i<n; i++){
        printf("Enter the marks in %dth subject: ", i+1);
        //scanf("%d", ptr+i);
    }
    printf("The marks are: ");
    for(i=0; i<n; i++){
        printf("%d\t", *(ptr+i));
    }
    getch();
}
