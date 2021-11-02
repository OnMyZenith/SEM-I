#include<stdio.h>

int main()
{
    int n;
    printf("Enter a Number ?\n");
    scanf("%d", &n);
    
    
    int count = 2;
    int i=0;

    while(count<=n-1)
    {
        if(n%count==0)
        {
            count=n;
        }
        
        count++;












        /*if(n%count==0)
            printf("Number is not Prime");
            count = n;
        
        count=count + 1;*/
    }
   
    printf("Bye\n");
    
    return 0;
}