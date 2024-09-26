#include <stdio.h>

int main()
{
    int num, sum=0, flag=1;
    printf("Enter an integer : ");
    scanf("%d",&num);

    while(flag!=0){
        sum=0;
        while(num > 0){
            sum+=num%10;
            num/=10;
        }
        num = sum;
        flag = num/10;
    }

    printf("Sum = %d\n",sum);
    return 0;
}