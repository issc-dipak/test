#include <stdio.h>

int main()
{
    int x;
    printf("Enter integer value score out of 100: ");
    scanf("%d",&x);
    if(x>=90)
        printf("A\n");
    else if(x>=80 && x<=89)
        printf("B\n");
    else if(x>=70 && x<=79)
        printf("C\n");
    else if(x>=60 && x<=69)
        printf("D\n");
    else
        printf("Invalid score or fail!\n");
    return 0;
    
}
	
