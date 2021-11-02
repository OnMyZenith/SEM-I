#include<stdio.h>

int main()
{
    int n1,n2,HCF,LCM,divisor,divident;
    printf("Enter two Numbers:");
    scanf("%d %d",&n1,&n2);
    
    divisor=n1;
    divident=n2;

    int min;
    while(1){
        int rem = divident%divisor;

        if(rem==0)
            break;
        
        divident = divisor;
        divisor = rem;


    }
    HCF=divisor;
    LCM=n1*n2/HCF;
    printf("LCM:%d",LCM);
    return 0;

}