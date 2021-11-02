#include<stdio.h>
int main()
{
    int binary,mult=1,ans=0;

    printf("Enter Binary No.:");
    scanf("%d",&binary);

    while(binary!=0){
        int rem=binary%10;
        ans=ans+rem*mult;
        binary=binary/10;
        mult=mult*2;
    }
    printf("Decimal no.:%d",ans);
}