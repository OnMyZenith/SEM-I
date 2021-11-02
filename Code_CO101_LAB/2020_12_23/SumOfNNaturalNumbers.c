#include<stdio.h>

int main()
{
    int n;
    printf("Enter N ?\n");
    scanf("%d", &n);
    
    
    int count = 1;
    int sum = 0;

    while(count<=n)
    {
        sum=sum+count;
        count=count + 1;
    }

    printf("Sum of First %d Natural Numbers is %d.\n",n,sum);    
    printf("Bye\n");
    
    return 0;
}