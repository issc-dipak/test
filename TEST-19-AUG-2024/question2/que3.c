#include <stdio.h>

int main()
{
    long int base, exponent, power=1,i;
    printf("Enter base and exponent: ");
    scanf("%ld %ld",&base, &exponent);

    for(i=0;i<exponent;i++)
        power *=base;

    printf(" %ld^%ld = %ld\n",base, exponent, power);
    return 0;
}