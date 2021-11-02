#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    printf("Enter a string: ");
    scanf("%s",a);
    int len=0;
    while(a[len]!='\0')
        len++;
    int flag=0;

    int i=0;
    int j= len-1;
    while(i<j){
        if(a[i]!=a[j])
            flag=1;
            break;
        i++;
        j--;
    }
    if(flag==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}