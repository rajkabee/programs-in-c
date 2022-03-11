#include<stdio.h>
#include<conio.h>
void  main(){
    int A[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int B[3][3] = {{9,8,7}, {6,5,4}, {3,2,1}};
    //int sum[3][3];
    int i, j, k, P[3][3];

    for (i=0; i<3; i++){
        for(j=0; j<3; j++){
            P[i][j]=0;
            for(k=0; k<3; k++){
                P[i][j]+=A[i][k]*B[k][j];
            }
        }

    }
    /*
    for (i=0; i<3; i++){
        for(j=0; j<3; j++){
                sum[i][j] = A[i][j]+B[i][j];
        }

    }
    */
    for (i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", P[i][j]);
        }
        printf("\n");
    }


    getch();
}
