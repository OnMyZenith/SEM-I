#include<stdio.h>

int main()
{
    int n,m;
    printf("Enter N:");
    scanf("%d",&n);
    m=n;
    
    int ans=0;

    while(n!=0)
    {
        int rem=n%10;
        ans = ans*10 + rem;
        n=n/10;
    }

    printf("Reverse of %d is %d", m, ans);


    return 0;

}