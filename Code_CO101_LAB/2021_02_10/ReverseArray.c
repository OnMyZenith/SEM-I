#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++){
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }

    for(int count = 0; count<(n-1)/2;count++){
        a[count]=a[count]+a[n-1-count];
        a[n-1-count]=a[count]-a[n-1-count];
        a[count]=a[count]-a[n-1-count];
        // int temp=a[count];
        // a[count]=a[n-1-count];
        // a[n-1-count]=temp;
    }

    for(int i = 0; i<n;i++){
    printf("%d\t",a[i]);
    }
    
    return 0;
}