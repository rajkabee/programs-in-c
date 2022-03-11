#include<stdio.h>
#include<conio.h>
struct student{
    int id;
    char name[50];
    float grade;
};

void main(){
    struct student st[3];
    int i;
    for(i=0; i<3; i++){
        printf("Enter the %d th student's details: \n Id: ", i+1);
        enterStudent(&st[i]);
        /*
        printf("Enter the %d th student's details: \n Id: ", i+1);
        scanf("%d", &st[i].id);
        printf("Name: ");
        scanf("%s", &st[i].name);
        printf("Grade: ");
        scanf("%f", &st[i].grade);
        */
    }

    for(i=0; i<3; i++){
        printf("%d. %s\t%0.2f", st[i].id, st[i].name, st[i].grade);

    }


    getch();
}


void enterStudent(struct student *ptr){
    /*
    scanf("%d", &ptr->id);
    printf("Name: ");
    scanf("%s", &ptr->name);
    printf("Grade: ");
    scanf("%f", &ptr->grade);
    */
    scanf("%d", &(*ptr).id);
    printf("Name: ");
    scanf("%s", &(*ptr).name);
    printf("Grade: ");
    scanf("%f", &(*ptr).grade);
}
