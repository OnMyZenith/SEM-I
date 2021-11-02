#include<stdio.h>

int main()
{
    int n,r;
    printf("Enter N and Rotations(Clockwise):");
    scanf("%d %d",&n,&r);

    int tempr=r,temp=n,ans=n;

    int nod=0;
    while(temp!=0){
        temp=temp/10;
        nod++;
    }

    int i=1,f=1;
    while(i<nod){
        f=f*10;
        i++;
    }

    while(r!=0)
    {
        int rem=ans%10, q=ans/10;
        ans = rem*f + q;
        r--;
    }

    printf("%d Rotations of %d is %d\n",tempr,n,ans);

    return 0;
}