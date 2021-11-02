#include<stdio.h>

int main()
{
    int divisor,divident;
    printf("Enter two Numbers:");
    scanf("%d %d",&divisor,&divident);
    
    int min;
    while(1){
        int rem = divident%divisor;

        if(rem==0)
            break;
        
        divident = divisor;
        divisor = rem;


    }

    printf("HCF:%d",divisor);
    return 0;

}