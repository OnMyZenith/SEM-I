#include<stdio.h>
int main(){
    char a[20];

    printf("Enter the string:");
    scanf("%s",&a);
    int i=0;
    while(a[i]!='\0'){
        i++;
    }
    printf("Length=%d",i);
    return 0;
}