#include<stdio.h>

int main()
{

    int n = 7 ;
    int nsp = n/2 ;
    int nst = 1 ;

    int row = 1 ;
    while(row <= n)
    {
        // work
        // spaces
        for(int csp = 1 ; csp <= nsp ; csp++)
            printf("  ") ;

        // stars
        for(int cst = 1 ; cst <= nst ; cst++)
            printf("* ") ;
        
        // update
        printf("\n") ;
        if(row<=n/2){
            nst=nst+2;
            nsp--;
        }
        else{
            nst=nst-2;
            nsp++;
        }
        row++;
    }

    return  0 ;
}