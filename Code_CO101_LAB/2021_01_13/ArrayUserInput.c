#include<stdio.h>
int main()
{
    int n;
    printf("No. of elements in array:");
    scanf("%d",&n);
    int array[n];

    for(int i=0;i<=n-1;i++){
        printf("array[%d]:",i);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<=n-1;i++){
        printf("array[%d]:%d\n",i,array[i]);
    }

    return 0;
}