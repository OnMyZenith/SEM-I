#include<stdio.h>

int main()
{
    int n,a,b;
    printf("Enter N:");
    scanf("%d",&n);
    a=0;
    b=1;

    int count = 0;
    while(count <=n)
    {
        printf("%d\t",a);
        int sum=a+b;
        a=b;
        b=sum;
        count++;

    }


    return 0;

}