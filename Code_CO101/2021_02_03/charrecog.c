#include<stdio.h>
main(){
	char c;
	do{
		printf("\nEnter a character:");
		c=getche();
		if(c=='a'||c=='o'||c=='i'||c=='o'||c=='u')
			printf("\nIt is a vovel\n");
		else if (c>'a'&&c<='z')
			printf("\nIt is a consonant\n");
//		else if (c>48&&c<=57)
		else if (c>'0'&&c<='9')
			printf("\nIt is a digit\n");
//	}while(c!=42);		
	}while(c!='*');
	printf("\nEnd of program\n");
}

/*
int x;
char c;
x=42;
c=42; eqvt to c='*'
*/ 
