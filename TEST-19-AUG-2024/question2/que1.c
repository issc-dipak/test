#include <stdio.h>

int main()
{
    int x,i;
    double avg, sum=0;
    printf("Enter 10 integers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x);
        sum+=x;
        printf("Sum = %.2lf\n",sum);
    }

    avg = sum/10;
    printf("Original Average is: %.2lf\n",avg);

    if(avg>50)
        printf("Final Average is : %.2lf\n",avg/2);
    else
        printf("Final Average is : %.2lf\n",avg);
    return 0;
    
}
	
