#include<stdio.h>
#include<conio.h>


void func(int x[]){
    int j;
    printf("in the func function: ");
    for(j=0; j<5; j++){
        x[j]+=100;
        printf("%d\n", x[j]);
    }

}

void main(){
    int i[]={1,2,3,4,5},j;
    func(i);
    printf("in the main function: ");
    for(j=0; j<5; j++){
        printf("%d\n", i[j]);
    }
    getch();
}



