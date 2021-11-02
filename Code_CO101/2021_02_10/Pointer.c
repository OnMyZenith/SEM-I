#include<stdio.h>
int main()
{
	int a = 50;
	int *p;
	int **q;
	int ***r;
	p=&a;
	q=&p;
	r=&q;
	printf("Address of a=%u\n",&a);
	printf("Address of p=%u\n",&p);
	printf("Address of q=%u\n",&q);
	printf("Address of r=%u\n",&r);
	printf("Variable 'a' contains %d\n",a);
	printf("Variable 'a' contains %d\n",*p);
	printf("Variable 'a' contains %d\n",**q);
	printf("Variable 'a' contains %d\n\n",***r);
	a=a+25;
	*p=*p+25;
	**q=**q+25;
	***r=***r+25;
	printf("Address of a=%u\n",&a);
	printf("Address of p=%u\n",&p);
	printf("Address of q=%u\n",&q);
	printf("Address of r=%u\n",&r);
	printf("Variable 'a' contains %d\n",a);
	printf("Variable 'a' contains %d\n",*p);
	printf("Variable 'a' contains %d\n",**q);
	printf("Variable 'a' contains %d\n",***r);
	return 0;
}