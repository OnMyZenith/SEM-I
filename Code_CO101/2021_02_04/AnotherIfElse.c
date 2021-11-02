#include<stdio.h>
main(){
	int x,y;
	printf("Enter X:");
	scanf("%d",&x);
	y=(x>=10)?x:5;
/*
	if(x>=10)
		y=x;
	else y=5;
*/
	printf("Y=%d\n",y);
	
}
