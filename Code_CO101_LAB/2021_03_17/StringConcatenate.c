#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    printf("Enter a string: ");
    scanf("%s",a);
    printf("Enter b string: ");
    scanf("%s",b);
    int len=0;
    while(a[len]!='\0')
        len++;
    int i=len;
    int j=0;

    while(b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;
    }
    a[i]='\0';
    printf("%s",a);
    return 0;
}
//strcat(a,b)