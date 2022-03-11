#include<stdio.h>
#include<conio.h>
//#include<file.h>
void main(){
    char fileName[20];
    FILE *fp;
    char ch;
    printf("Enter the name of the file to be created: ");
    scanf("%s", &fileName);
    fp = fopen(fileName, "w+");

    fprintf(fp, "this is a new file created!");
    fprintf(fp, "%d", 12345);
    fclose(fp);
    fp = fopen(fileName, "r");
    while ( 1 )
    {
        ch = fgetc ( fp ); //Each character of the file is read and stored in the character file.
        if ( ch == EOF )
        break;
        printf("%c",ch);
    }
    fclose(fp);


    getch();
}
