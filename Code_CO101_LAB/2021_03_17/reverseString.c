#include<stdio.h>
int main(){
    char a[20];

    printf("Enter the string:");
    scanf("%s",&a);
    int len=0;
    while(a[len]!='\0'){
        len++;
    }
    int i=0,j=len-1;
    while(i<j){
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;

    }
    printf("Reversed=%s",a);
    return 0;
}