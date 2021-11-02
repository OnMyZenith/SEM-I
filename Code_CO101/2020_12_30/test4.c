#include<stdio.h>
int main()
{
	short a;
	int b;
	b=sizeof(a);
	printf("Size of variable a is %d bytes\n",b);
	return 0;
}
