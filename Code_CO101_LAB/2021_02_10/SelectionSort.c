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

    for(int count = 0; count<=n-2;count++){
        int minidx=count;
        for(int j=count+1;j<=n-1;j++){
            if(a[j]<a[minidx])
                minidx=j;
        }
        int temp=a[count];
        a[count]=a[minidx];
        a[minidx]=temp;
    }

    for(int i = 0; i<n;i++){
    printf("%d\t",a[i]);
    }
    
    return 0;
}