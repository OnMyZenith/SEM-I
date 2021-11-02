#include<stdio.h>

int main()
{

    int n = 7 ;
    int nsp = 1 ;
    int nst = n/2 ;

    int row = 1 ;
    while(row <= n)
    {
        // work
        // stars
        for(int cst = 1 ; cst <= nst ; cst++)
            printf("* ") ;

        // spaces
        for(int csp = 1 ; csp <= nsp ; csp++)
            if(csp==1||csp==nsp)
                printf("* ") ;
            else printf("  ") ;

        // stars
        for(int cst = 1 ; cst <= nst ; cst++)
            printf("* ") ;
        
        // update
        printf("\n") ;
        if(row<=n/2){
            nsp=nsp+2;
            nst--;
        }
        else{
            nsp=nsp-2;
            nst++;
        }
        row++;
    }

    return  0 ;
}