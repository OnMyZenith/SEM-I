#include<stdio.h>
int main(){
    int b,e;
    printf("Enter Base and Exponent:");
    scanf("%d %d",&b,&e);
    
    int i=1,n=1;
    
    while(i<=e){
        n=n*b;
        i++;
    }

    printf("%d",n);

    return 0;


}