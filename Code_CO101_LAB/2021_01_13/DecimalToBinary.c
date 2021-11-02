#include<stdio.h>
int main()
{
    int decimal,mult=1,ans=0;

    printf("Enter Decimal No.:");
    scanf("%d",&decimal);

    while(decimal!=0){
        int rem=decimal%2;
        ans=ans+rem*mult;
        decimal=decimal/2;
        mult=mult*10;
    }
    printf("Binary no.:%d",ans);
}