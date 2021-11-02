#include<stdio.h>

int main()
{
    int n,m;
    printf("Enter N:");
    scanf("%d",&n);
    m=n;
    int sum=0;

    
    while(n!=0)
    {
        int rem=n%10;
        sum = sum + rem;
        n=n/10;
    }

    printf("Sum of digits of %d is %d", m, sum);



    return 0;

}