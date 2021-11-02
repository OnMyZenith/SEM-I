#include<stdio.h>
int main()
{
    int n=7;

    int row=1;
    while(row<=n){
        for(int column=1;column<=n;column++){
            if(row==1||column==1||row==n||column==n)
                printf("* ");
            else
                printf("  ");
        }
        row++;
        printf("\n");
    }
    return 0;
}