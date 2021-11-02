#include<stdio.h>
main()
{
	float x=1.65,y;
	int n1=15,n2;
	y=x*2+n1*5;
	printf("y=%f\n",y);
	n2=x*2+n1*5;
	printf("n2=%d\n",n2);
	n2=(int)(x*2+n1*5);
	printf("n2=%d\n",n2);
	n2=(int)x*2+n1*5;
	printf("n2=%d\n",n2);	
}
