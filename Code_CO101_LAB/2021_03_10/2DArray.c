#include<stdio.h>

int main()
{
    int rows;
    int columns;
    scanf("%d %d", &rows, &columns);
    int a[rows][columns];
    for (int i = 0; i < rows; i++)    {
        for (int j = 0; j < columns; j++)
            scanf("%d",&a[i][j]);
    }
    int b[rows][columns];
    for (int i = 0; i < rows; i++)    {
        for (int j = 0; j < columns; j++)
            scanf("%d",&b[i][j]);
    }
    int res[rows][columns];
    for (int i = 0; i < rows; i++)    {
        for (int j = 0; j < columns; j++)
            res[i][j]=b[i][j]+a[i][j];
    }
    for(int r=0;r<rows;r++){
        for(int c=0;c<columns;c++){
            printf("%d\t",res[r][c]);
        }
        printf("\n");
    }
    return 0;
}