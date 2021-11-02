#include<stdio.h>
main(){
	int i,h,line;
	printf("Enter Height:");
	scanf("%d",&h);
	for(line=1;line<=h;line++){
		for(i=1;i<=line;i++)
			printf("*");
		printf("\n");
	}
}
/*

*			line 1 stars 1
**			line 2 stars 2
***			line 3 stars 3
...
....
.....
*******		line h

*/
