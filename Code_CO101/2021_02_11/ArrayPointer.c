#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50},*p;
    p=&a[0];
    printf("%u\n",p);
    printf("%d\n",*p);
    p=p+1;//It moves to the next Box
    //don't worry about size, If int, the value will go up by 4 
    //and accordingly for other data types
    printf("%u\n",p);
    printf("%d\n",*p);

    return 0;
}