#include<stdio.h>

int main()
{
    int r1,c1,r2,c2,i,j,k;

    printf("Enter number of rows for Matrix 1: ");
    scanf("%d",&r1);
    printf("Enter number of columns for Matrix 1: ");
    scanf("%d",&c1);
    int M1[r1][c1];
    printf("Enter elements for Matrix 1: ");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("M1[%d][%d] : ",i+1,j+1);
            scanf("%d",&M1[i][j]);
        }
    }
    for(i=0;i<r1;i++){
        printf("[");
        for(j=0;j<c1;j++){
            printf(" %d ",M1[i][j]);
        }
        printf("]\n");
    }

    do{
        printf("Enter number of rows for Matrix 2: ");
        scanf("%d",&r2);
    } while(c1!=r2);
    
    printf("Enter number of columns for Matrix 2: ");
    scanf("%d",&c2);
    int M2[r2][c2];
    printf("Enter elements for Matrix 2: ");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("M2[%d][%d] : ",i+1,j+1);
            scanf("%d",&M2[i][j]);
        }
    }
    for(i=0;i<r2;i++){
        printf("[");
        for(j=0;j<c2;j++){
            printf(" %d ",M2[i][j]);
        }
        printf("]\n");
    }

    printf("Matrix Multiplication is : \n");
    int MUL[r1][c2];
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            MUL[i][j]=0;
            for(k=0;k<c1;k++){
                MUL[i][j]+=M1[i][k]*M2[k][j];
            }
        }
    }

    for(i=0;i<r1;i++){
        printf("[");
        for(j=0;j<c2;j++){
            printf(" %2d ",MUL[i][j]);
        }
        printf("]\n");
    }
    return 0;
}