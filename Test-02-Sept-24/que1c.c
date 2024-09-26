#include<stdio.h>

int main()
{
    int n=10,i,min,max;
    int arr[n];

    printf("Enter 10 integers: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(i==0){
            min=arr[i];
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("a) Minimum value: %d\n",min);
    printf("b) Maximum value: %d\n",max);

    return 0;
}