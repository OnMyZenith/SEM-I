#include<stdio.h>
int main()
{
    int n=5;

    int row=1;
    while(row<=n){
        for(int column=1;column<=row-1;column++){
            printf(" ");
        }
        for(int column=1;column<=n-row+1;column++){
            printf("*");
        }
        row++;
        printf("\n");
    }
    return 0;
}