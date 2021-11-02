#include<stdio.h>

int main()
{
    int count = 1; //initialization
    
    while(count<=5) //condition
    {
        printf("Hello\n");
        count=count + 1; // re-initialization
    }
    
    printf("%d\n", count);
    printf("Bye\n");
    
    return 0;
}