#include <stdio.h>
#include <math.h>
int main()
{
    int num, sum=0, flag=1;
    printf("Enter an integer : ");
    scanf("%d",&num);

    while(flag!=0){
        sum=0;
        printf("\nNum = %d",num);
        while(num > 0){
            sum+=pow(num%10, 2);
            num/=10;
        }
        num = sum;
        if(num==1)
            break;
        flag = num/10;
    }
    if(sum==1)
        printf("\nTrue\n");
    else
        printf("\nFalse\n");
    return 0;
}