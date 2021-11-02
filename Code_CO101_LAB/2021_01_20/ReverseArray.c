#include<stdio.h>
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

    for (int j = n-1; j >= 0; j--)
    {
        printf("%d\t",a[j]);
    }
    
    return 0;
}