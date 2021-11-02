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
    int rotations;
    printf("Enter the no. of rotations:");
    scanf("%d",&rotations);
    rotations=rotations%n;
    for(int r=1; r<=rotations;r++){

        int temp=a[n-1];
        for(int j=n-1;j>0;j--){
            a[j]=a[j-1];
        }
        a[0]=temp;

    }
    for(int i = 0; i<n;i++){
    printf("%d\t",a[i]);
    }
    return 0;
}