//Program to convert temp in Celcius to Fahrenheit
#include<stdio.h>
main()
{
	float c,f;
	printf("Enter Temp in Centigrade:");
	scanf("%f",&c);
	f=9*c/5+32;
	printf("Temp in Fahrenheit is %8.6f\n",f);
}
