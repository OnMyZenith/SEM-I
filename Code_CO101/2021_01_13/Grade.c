#include<stdio.h>
int main()
{
	int cws,prs,mte,ete,tm;
	char grade;
	printf("Enter Marks in CWS PRS MTE and ETE:");
	scanf("%d %d %d %d",&cws,&prs,&mte,&ete);
	tm=cws+prs+mte+ete;
	if(tm>90)
	{
		printf("Grade=O");
	}
	else if(tm>80)
	{
		printf("Grade=A+");
	}
	else if(tm>70)
	{
		printf("Grade=A");
	}
	else if(tm>60)
	{
		printf("Grade=B+");
	}
	else if(tm>50)
	{
		printf("Grade=B");
	}
	else if(tm>45)
	{
		printf("Grade=C");
	}
	else if(tm>=35)
	{
		printf("Grade=P");
	}
	else
	{
		printf("Grade=F");
	}
}
