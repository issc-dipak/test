#include<stdio.h>

int main()
{
    int m,n,i,j,sum=0,rich,max;

    printf("Enter number of Customers: ");
    scanf("%d",&m);
    printf("Enter number of Banks: ");
    scanf("%d",&n);
    int M1[m][n];
    for(i=0;i<m;i++){
        printf("Customer %d : \n",i+1);
        for(j=0;j<n;j++){
            printf("\tBank %d : ",j+1);
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

    printf(" Customer %d is Richest with Wealth %d.\n",rich+1,max);
    
    return 0;
}