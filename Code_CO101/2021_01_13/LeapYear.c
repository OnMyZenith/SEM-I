#include<stdio.h>
int main()
{
	int y;
	printf("Enter a Year:");
	scanf("%d",&y);
	if(y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0)
			{
				printf("It's not a leap year'\n");
			}
			else
			{
				printf("It's not a leap year'\n");
			}
		}
		else
		{
			printf("It's a leap year'\n");
		}
	}
	else
	{
		printf("It's not a leap year'\n");
	}
}
