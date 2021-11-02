#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array(innreasing order):");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int lo=0,hi=n-1,mid,idx=-1,item;
    printf("Enter the item to look for in the array:");
    scanf("%d",&item);
    
    while(hi>=lo){
        mid=(lo+hi)/2;
        if(item>a[mid]){
            lo=mid+1;
        }
        else if (item<a[mid]){
            hi=mid-1;
        }
        else{
            idx=mid;
            break;
        }
    }
    if(idx!=-1)
        printf("The Last Occurance is at %d index\n",idx);
    else printf("The Item is not present\n");
    return 0;
}