#include<stdio.h>

void PD(int);
int main()
{
    printf("Hello\n");
    PD(5);
    printf("Bye\n");
    return 0;
}

//BP: n--->1;
void PD(int n)
{
    //Base Case
    if (n==0)
        return;
    //Self Work
    //SP: n-1--->1;
    printf("Hello %d\n",n);
    PD(n-1);
    printf("Bye %d\n",n);

}