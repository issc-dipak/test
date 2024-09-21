#include<stdio.h>

int main()
{
    int r1,c1,i,j,k;

    printf("Enter number oMatrix 1: ");
    scanf("%d",&r1);
    printf("Enter number  Matrix 1: ");
    scanf("%d",&c1);
    int M1[r1][c1];
    printf("Enter elements for Matrix 1: ");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("M1[%d][%d] : ",i+1,j+1);
            scanf("%d",&M1[i][j]);
        }
    }

    printf("Matrix Multiplication  \n");
    int MUL[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            MUL[i][j]=0;
            for(k=0;k<c1;k++){
                MUL[i][j]+=r1[i][k]*c1[k][j];
            }
        }
    }
     printf("Matrix substraction  \n");
    int MUL[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            MUL[i][j]=0
            for(k=0;k<c1;k++){
                MUL[i][j]+=r1[i][k]-c1[k][j];
            }
        }
    }
    for(i=0;i<r1;i++){
        printf("[");
        for(j=0;j<c1;j++){
            printf(" %2d ",MUL[i][j]);
        }
        printf("]\n");
    }
    return 0;
}