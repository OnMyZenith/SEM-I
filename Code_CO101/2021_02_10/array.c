#include<stdio.h>
int main()
{
    int a[5];
    printf("Address of a[0]=%u\n",a[0]);
    printf("Address of a[1]=%u\n",a[1]);
    printf("Address of a[2]=%u\n",a[2]);
    printf("Address of a[3]=%u\n",a[3]);
    printf("Address of a[4]=%u\n\n",a[4]);
    for(int i=0; i<5;i++){
    printf("Address of a[%d]=%u\n",i,a[i]);
    }

	return 0;
}