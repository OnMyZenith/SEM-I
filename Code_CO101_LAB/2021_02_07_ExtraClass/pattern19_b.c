#include<stdio.h>

int main()
{

    int n = 9 ;
    int nsp = -1 ;
    int nst = n/2+1 ;

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
        int cst = 1;
        if(row==1||row==n)
            cst = 2;
//        for(int cst=1 ; cst <= nst ; cst++)
//            printf("* ") ;
        for( ; cst <= nst ; cst++)
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
/*
initial output
* * * * * * * * * * 
* * * *   * * * *
* * *       * * *
* *           * *
*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * * *
output after change
* * * * * * * * * 
* * * *   * * * *
* * *       * * *
* *           * *
*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * *


*/