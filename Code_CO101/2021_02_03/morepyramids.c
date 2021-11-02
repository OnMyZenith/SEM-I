#include<stdio.h>
main(){
	int i,h,line,spaces;
	printf("Enter Height:");
	scanf("%d",&h);
	spaces=h;
	for(line=1;line<=h;line++){
		for(i=1;i<=spaces;i++)
			printf(" ");
		for(i=1;i<=line;i++)
			printf("* ");
		spaces--;
		printf("\n");
	}
}
