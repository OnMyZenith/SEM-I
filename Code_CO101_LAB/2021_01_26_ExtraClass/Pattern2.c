#include<stdio.h>
int main()
{
    int n=7;

    int row=1;
    while(row<=n){
        int nst=row;
        for(int column=1;column<=nst;column++){
            printf("*");
        }
        row++;
        printf("\n");
    }
    return 0;
}