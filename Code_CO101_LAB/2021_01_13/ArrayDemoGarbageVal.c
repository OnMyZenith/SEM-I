#include<stdio.h>
int main()
{
    int arr[100];
    printf("%d\n",arr[1]);
    arr[0]=10;
    arr[1]=20;
    printf("%d\n",arr[1]);
    return 0;
}