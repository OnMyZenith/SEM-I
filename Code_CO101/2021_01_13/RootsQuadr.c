#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x1,x2,rp,ip;
	printf("Enter a b and c:");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>=0)
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("Roots are Real\n");
		printf("x1=%f\tx2=%f\n",x1,x2);
	}
	else
	{
		d=-d;
		rp=-b/(2*a);
		ip=sqrt(d)/(2*a);
		printf("Roots are Imaginary\n");
		printf("x1=%f+i(%f)\n",rp,ip);
		printf("x2=%f-i(%f)\n",rp,ip);
	}
}
