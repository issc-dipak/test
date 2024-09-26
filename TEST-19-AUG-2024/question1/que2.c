#include <stdio.h>

int main()
{
    long double x,result;
    printf("Enter value of x: ");
    scanf("%Lf",&x);

    result = (x*x*x) + (5*x*x) + (3*x);
    result = result / x;
    printf("f(%.4Lf) = %.4Lf\n",x,result);
    return 0;
}
	
