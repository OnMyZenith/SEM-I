#include<stdio.h>

int main()
{
    int marks = 50;
    int package = 20;

    if(marks > 80 && package > 20)
        printf("Excellent");
    else if(marks > 60 && package > 15)
        printf("Good");
    else if(marks > 40 && package > 5)
        printf("Ok");
    else
        printf("Keep Trying");
    
    printf("\nBye");

    return 0;
}