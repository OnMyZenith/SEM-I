#include<stdio.h>
main(){
	int *ptr;// a pointer variable which can store address of any int variable 
	int x=40,y=40,z=59;
	ptr=&x;
	printf("address of x is %u\n",&x);
	printf("address of y is %u\n",&y);
	printf("address of z is %u\n",&z);
	printf("address of x is %u\n",ptr);
	printf("Value of x is %d\n",x);
	printf("Value of x is %d\n",*ptr);
	*ptr=*ptr+15;
	printf("Value of x is %d\n",*ptr);//*ptr is int value stored at address ptr
	printf("Value of x is %d\n",x);

}

/*

address of x is 6487572
address of y is 6487568
address of z is 6487564
address of x is 6487572
Value of x is 40
Value of x is 40
Value of x is 55
Value of x is 55

--------------------------------
Process exited after 0.01035 seconds with return value 17
Press any key to continue . . .

*/
