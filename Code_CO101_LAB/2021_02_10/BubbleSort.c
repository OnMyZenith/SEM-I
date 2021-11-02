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
        for(int j=0;j+count<=n-2;j++){
            if(a[j]>a[j+1]){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i = 0; i<n;i++){
    printf("%d\t",a[i]);
    }
    return 0;
}