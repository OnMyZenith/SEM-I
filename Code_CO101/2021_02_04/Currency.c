#include<stdio.h>
main(){
	float rupees;
	float convertedamount;
	printf("Enter amount in Rupees:");
	scanf("%f",&rupees);
	printf("Enter currency code\n");
	printf("d-US dollars, p-Pounds, a-Australian dollars, 'n' for Dinars\n");
	getchar();
	ccode=getchar();
	switch(ccode){
		case 'd': convertedamount=rupees/75.5;
		printf("Amount in US Dollar id %10.4f\n");
		break;
		case 'p': convertedamount=rupees/75.5;
		printf("Amount in Pound id %10.4f\n");
		break;
		case 'a': convertedamount=rupees/75.5;
		printf("Amount in Australian dollar id %10.4f\n");
		break;
		case 'n': convertedamount=rupees/75.5;
		printf("Amount in Dinar id %10.4f\n");
		break;
	}
}
