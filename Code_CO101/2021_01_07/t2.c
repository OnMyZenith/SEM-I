#include<stdio.h>
main()
{
	double x=170.898355277783225;
	float y;
	printf("x=%f\n",x);
	y=(float)x;
	printf("y=%f\n",y);
	y=x;//Compiler dependent, most compilers do the conversion automatically so can get away without writing (float)
	printf("y=%f\n",y);

}
