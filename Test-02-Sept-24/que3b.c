#include<stdio.h>

int main()
{
    int n,i,j,k,temp;

    printf("Enter number of rows and columns for Square Matrix : ");
    scanf("%d",&n);

    int M[n][n];
    printf("Enter elements for Matrix : ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("M[%d][%d] : ",i+1,j+1);
            scanf("%d",&M[i][j]);
        }
    }
    printf("Original Matrix : \n");
    for(i=0;i<n;i++){
        printf("[");
        for(j=0;j<n;j++){
            printf(" %d ",M[i][j]);
        }
        printf("]\n");
    }

    printf("Horizontally Flipped and Inverted Matrix : \n");

    for(i=0;i<n;i++){
        for(j=n-1,k=0;j>=0,k<n;j--,k++){
            
            temp=M[i][j];
            M[i][j]=M[i][k];
            M[i][k] = temp;
            if(M[i][j]){
                M[i][j]=0;
            }
            else{
                M[i][j]=1;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("[");
        for(j=0;j<n;j++){
            printf(" %d ",M[i][j]);
        }
        printf("]\n");
    }

    return 0;
}