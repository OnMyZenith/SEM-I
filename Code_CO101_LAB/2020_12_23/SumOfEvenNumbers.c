#include<stdio.h>

int main()
{
    int n;
    printf("Enter a Number ?\n");
    scanf("%d", &n);
    
    
    int count = 1;
    int sum = 0;

    while(count<=n)
    {
        if(count%2==0)
            sum=sum+count;
        
        count=count + 1;
    }

    printf("Sum of Even Numbers in %d is %d.\n",n,sum);    
    printf("Bye\n");
    
    return 0;
}