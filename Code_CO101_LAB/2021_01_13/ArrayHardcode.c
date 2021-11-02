#include<stdio.h>
int main()
{
    int arr[5]={10,8,100,90,60};
    int ans=0;
    for(int i=0;i<=4;i++){
        ans=arr[i]+ans;
    }
    printf("Sum of elements of array is:%d",ans);
    return 0;
}