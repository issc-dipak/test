#include <stdio.h>

int main()
{
    int n = 5, i;
    double arr[n], sum = 0, product = 1;

    printf("Enter five decimal numbers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &arr[i]);
        sum += arr[i];
        product *= arr[i];
    }
    printf("a) Sum: %.4lf\n", sum);
    printf("b) Product: %.4lf\n", product);

    return 0;
}