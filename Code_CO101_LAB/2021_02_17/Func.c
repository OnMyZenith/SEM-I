#include<stdio.h>

//fxn declare; only req if fxn definition is after main fxn
void addition();
void subtraction();

int main()
{
    printf("hello\n");
    //fxn call
    addition();
    subtraction();
    
    printf("bye\n");
    return 0;
}

//fxn define
void addition(){
    int a=10, b=20;

    int sum=a+b;


    printf("%d\n",sum);
}
void subtraction(){
    int a=10, b=20;

    int diff=a-b;

    printf("%d\n",diff);
}