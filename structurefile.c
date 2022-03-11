
#include<stdio.h>
#include<conio.h>

struct student{
    int id;
    char name[50];
    float grade;
} sts;

void main(){
    struct student st[3];
    int i;
    FILE *fp;
    char ch;
    for(i=0; i<3; i++){
        printf("Enter the id of the student: ");
        scanf("%d", &st[i].id);
        printf("Enter the name of the student: ");
        scanf("%s", &st[i].name);
        printf("Enter the grade: ");
        scanf("%f", &st[i].grade);
        //printf("%d. %s\t%0.2f", st[i].id, st[i].name, st[i].grade);
    }

    fp = fopen("students.txt", "w+");
    for(i=0; i<3; i++){
        fprintf(fp, "%d. %s\t %f", st[i].id,st[i].name, st[i].grade);
        //fwrite (&st[i], sizeof(struct student), 1, fp);
    }
    rewind(fp);
    //fclose(fp);
/*
    while(1){
        ch = fgetc(fp);
        if(ch==EOF){
            break;
        }
        printf("%c", ch);
    }
*/
    //fp = fopen("students.txt", "r");
    while(fread(&sts, sizeof(struct student), 1, fp))
        printf ("id = %d name = %s %f\n", sts.id, sts.name, sts.grade);


    fclose(fp);
    getch();
}
