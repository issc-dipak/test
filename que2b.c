#include <stdio.h>
#include <math.h>
#
int main()
{
    int n,sum=0,flag=1;
    printf("Enter the integer : ");
    scanf("%d",&n);
    while(flag!=0){
    // while(1){
        sum=0;
        while(n>0){
            sum+=pow(n%10, 2);
            n/=10;
        }
        n=sum;
        if(n==1)
            break;
        flag=n/10;
        printf("\nNumber : %d",n);
    }
    if(sum==1){
        printf("\ntrue\n");
    }
    else{
        printf("\nfalse\n");
    }
    return 0;
}