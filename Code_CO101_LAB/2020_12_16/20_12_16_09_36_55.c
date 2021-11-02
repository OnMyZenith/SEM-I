#include <stdio.h>

//demo for variables
int main() {
    
    int p, r, t;
    
    printf("Enter Principle?\n");
    scanf("%d", &p);
    
    printf("Enter Rate?\n");
    scanf("%d", &r);
    
    printf("Enter Time?\n");
    scanf("%d", &t);
    
    int si=(p*r*t)/100;
    
    printf("Simple Interest is %d", si);
    
    
	return 0;
}

