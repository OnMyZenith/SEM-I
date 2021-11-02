#include<stdio.h>
#include<string.h>
int main(){
    char name[30];
    printf("Type Your Name:");
    gets(name);
    printf("Hello %-30s!\n",name);
    puts(name);
    printf("-------------------\n");
    int l;
    l=strlen(name);
    printf("Length of string=%d\n",l);
    for(int i=0;i<l;i++){
        printf("%c",name[i]);
    }
    printf("\n");
    printf("-------------------\n");
    int i=0;
    while(name[i]!='\0'){
        printf("%c",name[i]);
        i++;
    }
    return 0;
}
//If you want to print one char at a time use either
//strlen or
//check '\0' which is last char appended at the end 
//of input string like
//Ram Kumar\0

// If you intentionally enter '\0' like name[7]='\0' in the
//code only six char will be printed even if you used puts(name)
//which prints the entire string
//because \0 is end of string on compiler level