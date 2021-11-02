#include <stdio.h>

//Even Or Odd
int main() {
    
    int a,r;
    scanf("%d",&a);
    r=a%2;
    if(r==1)
    printf("%d is Odd",a);
    else
    printf("%d is Even",a);
    
	return 0;
}