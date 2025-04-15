#include<stdio.h>
int main()
{
    
    int x;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;++i)
    {
        scanf("%d",&arr[i]);

    }
    printf("Reversed array is ");
    for(int i=x-1;i>=0;--i)
    {
        printf("%d ",arr[i]);

    }

    return 0;
}
