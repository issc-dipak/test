#include<stdio.h>

int main()
{
    int m,n,i,j,sum=0,rich,max;
    printf("Enter number of Rows: ");
    scanf("%d",&m);
    printf("Enter number of Columns: ");
    scanf("%d",&n);
    int M1[m][n];
    for(i=0;i<m;i++){
        printf("Row %d : \n",i+1);
        for(j=0;j<n;j++){
            scanf("%d",&M1[i][j]);
        }
    }
    
    max=sum;
    for(i=0;i<m;i++){
        sum=0;
        for(j=0;j<n;j++){
            sum+=M1[i][j];
        }
        if(max<sum){
            max=sum;
            rich=i;
        }
    }
    
    printf("Output: [%d,%d]\n",rich,max);
    
    return 0;
}