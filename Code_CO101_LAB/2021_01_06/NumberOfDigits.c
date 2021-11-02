#include <stdio.h>

int main()
{
    int n,temp;
    printf("Enter number:");
    scanf("%d",&n);
    temp=n;
    
    int i=0;
    while(temp!=0){
        temp=temp/10;
        i++;
    }

    printf("Number of digits in %d is %d",n,i);
    return 0;
}