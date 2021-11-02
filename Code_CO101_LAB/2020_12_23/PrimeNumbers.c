#include<stdio.h>

int main()
{
    int n;
    printf("Enter a Number ?\n");
    scanf("%d", &n);

    int div = 2;
    int fact=0;

    while(div*div<=n)
    {
        if(n%div==0)
        {
            fact++;
            break;
        }
        div++;
    }
    
    if(fact==0)
        printf("%d is Prime\n",n);
    else
        printf("%d is not a Prime\n",n);

    printf("Bye\n");
    
    return 0;
}