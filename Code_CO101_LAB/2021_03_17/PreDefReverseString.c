#include<stdio.h>
#include<strings.h>
int main(){
    char a[20];

    printf("Enter the string:");
    scanf("%s",&a);
    int len=0;
    while(a[len]!='\0'){
        len++;
    }
    a[20]=strrev(a);
    printf("Reversed=%s",a);
    return 0;
}