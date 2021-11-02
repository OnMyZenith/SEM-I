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

    for(int count = 1; count<=n-1;count++){
        int item=a[count];
        
        int j =count - 1;

        while(a[j]>item&&j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=item;
    }
    for(int i = 0; i<n;i++){
    printf("%d\t",a[i]);
    }
    return 0;
}