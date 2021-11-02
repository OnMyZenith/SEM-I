#include<stdio.h>
int Fact(int);
int main(){
    int F=Fact(6);
    printf("%d",F);
    return 0;

}
int Fact(int n){
    if(n==0)
        return 1;
    int fnm1=Fact(n-1);
    int fn=fnm1*n;
    return fn;
}