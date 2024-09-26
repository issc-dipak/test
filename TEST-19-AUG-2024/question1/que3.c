#include <stdio.h>
#include <math.h>
int main()
{
    long double x,result;
    printf("Enter value of x: ");
    scanf("%Lf",&x);

    result =  sqrt((7*x*x)+x);
    result = result / 2;
    result += 10;
    printf("f(%.4Lf) = %.4Lf\n",x,result);
    return 0;
}
	
