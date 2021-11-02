#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    printf("Enter a string: ");
    scanf("%s",a);
    printf("Enter b string: ");
    scanf("%s",b);
    printf("Compare=%d",strcmp(a,b));
    return 0;
}