#include <stdio.h>

int main()
{
    int bas,expo,prod=1;
    printf("Enter Base and Exponent:");
    scanf("%d %d",&bas,&expo);
    
    while(expo!=0)
    {
        if(expo%2==0)
        {
            bas=bas*bas; 
            expo=expo/2;
        }
        else
        {
            prod=prod*bas;
            bas=bas*bas;
            expo=(expo-1)/2;
        }
    }
    printf("%d",prod);
}