#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter values of a and b for complex number ( a + bi ): ");
    scanf("%d %d",&x,&y);
    if(y>=0)
    {
        printf("Complex number is : %d + %di\n", x,y);
    }
    else
    {
        y=y*(-1);
        printf("Complex number is : %d - %di\n", x,y);
    }
    return 0;
    
}
	
