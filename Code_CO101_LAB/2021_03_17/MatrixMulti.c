#include<stdio.h>

int main()
{
    int r1;
    int c1;
    scanf("%d %d", &r1, &c1);
    int a[r1][c1];
    for (int i = 0; i < r1; i++)    {
        for (int j = 0; j < c1; j++)
            scanf("%d",&a[i][j]);
    }
    int r2;
    int c2;
    scanf("%d %d", &r2, &c2);
    int b[r2][c2];
    for (int i = 0; i < r2; i++)    {
        for (int j = 0; j < c2; j++)
            scanf("%d",&b[i][j]);
    }
    int res[r1][c2];
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c2; j++){
            int sum=0;
            for (int m = 0; m < c1; m++){
                sum +=a[i][m]*b[m][j];
            }
            res[i][j]=sum;
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }       
    return 0;
}