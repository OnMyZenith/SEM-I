#include<stdio.h>
int main()
{
	int a,b,c,largest;
	printf("Enter 3 Numbers:");
	scanf("%d %d %d",&a,&b,&c);
	largest=a;
	if(b>largest)
	largest=b;
	if(c>largest)
	largest=c;
	
	printf("Largest is %d\n",largest);
	return 0;
	
}
