#include<stdio.h>

int main()
{

    int n = 5 ;
    int nsp = 2*n-3 ;
    int nst = 1 ;

    int row = 1 ;
    while(row <= n)
    {
        // work
        // stars
        for(int cst = 1 ; cst <= nst ; cst++)
            printf("* ") ;

        // spaces
        for(int csp = 1 ; csp <= nsp ; csp++)
            printf("  ") ;

        // stars
        // for(int cst = 1 ; cst <= nst ; cst++)
        //     printf("* ") ;

        int cst = 1;
        if(row==n)
            cst = 2;
        for( ; cst <= nst ; cst++)
            printf("* ") ;
        
        // update
        printf("\n") ;
        nsp=nsp-2;
        nst++;
        row++;
    }

    return  0 ;
}