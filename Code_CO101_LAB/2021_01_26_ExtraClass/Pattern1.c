#include<stdio.h>
int main()
{
    int n=7;

    int row=1;
    while(row<=n){
        for(int column=1;column<=n;column++){
            printf("*");
        }
        row++;
        printf("\n");
    }
    return 0;
}