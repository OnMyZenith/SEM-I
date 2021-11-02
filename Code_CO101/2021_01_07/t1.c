#include<stdio.h>
main()
{
	float x=1.2;
	int n;
	n=(int)x;
	printf("n=%d\n",n);
	n=(int)x*8;
	printf("n=%d\n",n);
	n=(int)(x*8);
	printf("n=%d\n",n);
	printf("x=%f\n",x);
}
/*
n=8
n=9
x=1.200000
*/
