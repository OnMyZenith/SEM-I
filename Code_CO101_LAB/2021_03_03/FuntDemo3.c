#include<stdio.h>

int addition(int ,int);
int main()
{
    printf("Hello\n");
    int res = addition(10,20);
    printf("%d\n",res);
    printf("bye\n");
    return 0;
}

int addition(int a, int b)
{
    int sum = a+b;
    return sum;
}