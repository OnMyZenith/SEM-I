#include <stdio.h>
main()
{
	char x;
	int n;
	n=321;
	x=n;//x=n mod 256
	printf("x=%c\n",x);
}

//x=01000001		11111111=255		1 00000000=256
//n=00000000 00000000 00000001 01000001
