#include<stdio.h>

int main()
{
    int n1,n2,n,hcf;
    printf("Enter two Numbers:");
    scanf("%d %d",&n1,&n2);
    
    int min;
    if(n1>n2)
        min=n2;
    else
        min=n1;
    n=min;
    while(n>1){
        if(n1%n==0&&n2%n==0){
            hcf=n;
            break;
        }
    n--;
    }
    printf("HCF %d and %d is %d",n1,n2,hcf);
    return 0;

}