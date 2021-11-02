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
    int item;
    printf("Enter the item to look for in the array:");
    scanf("%d",&item);
    int idx=-1;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==item){
            idx=i;
        }
    }
    if(idx!=-1)
        printf("The item is present at %d index\n",idx);
    else printf("The Item is not present\n",idx);
    return 0;
}