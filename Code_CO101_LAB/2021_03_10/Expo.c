#include<stdio.h>
int expo(int,int);
int main(){
    int E=expo(7,3);
    printf("%d",E);
    return 0;

}
int expo(int e,int n){
    if(e==0)
        return 1;
    int ntoem1=expo(e-1,n);
    int ntoe=ntoem1*n;
    return ntoe;
}