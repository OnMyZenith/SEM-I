#include<stdio.h>
int main()
{
    int n=7;

    int row=1;
    while(row<=n){
        for(int column=1;column<=n-row;column++){
            printf(" ");
        }
        for(int column=1;column<=row;column++){
            printf("*");
        }
        row++;
        printf("\n");
    }
    return 0;
}