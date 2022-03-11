#include<stdio.h>
#include<conio.h>
struct student{
    int id;
    char name[50];
    float grade;
};

void main(){
    int n, i;
    struct student *ptr;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    ptr = (struct student *) calloc(n , sizeof(struct student));

    for(i=0; i<n; i++){
        printf("Enter the id of the student: ");
        scanf("%d", &(ptr+i)->id);
        printf("Enter the name of the student: ");
        scanf("%s", &(ptr+i)->name);
        printf("Enter the grade: ");
        scanf("%f", &(ptr+i)->grade);
    }
    printf("The details you entered are: ");
    for(i=0; i<n; i++){
        printf("%d. %s\t %f\n", (ptr+i)->id, (ptr+i)->name, (ptr+i)->grade);

    }
    getch();
}
