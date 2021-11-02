#include<stdio.h>
#define MAXSIZE 100
int main(){
    int n,i, f[MAXSIZE];
    printf("Enter N:");
    scanf("%d",&n);
    f[0]=0;
    f[1]=1;
    for(i=2;i<n;i++){
        f[i]=f[i-2]+f[i-1];
    }
    printf("Following is Fibonacci Series\n");
    for(i=0;i<n;i++){
    printf("%d\t",f[i]);
    }
    return 0;
}