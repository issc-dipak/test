#include <stdio.h>

int main()
{
    int num, count=0,ori,ans;
    printf("Enter an integer : ");
    scanf("%d",&num);
    ori = num;

    while(num > 0){
        ans = ori%(num%10);
        if(!ans)
            count++;
        num/=10;
    }
    
    printf("Digits that divide = %d\n",count);
    return 0;
}