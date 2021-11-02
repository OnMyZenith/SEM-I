#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the length of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("Max:%d",max);
    return 0;
}