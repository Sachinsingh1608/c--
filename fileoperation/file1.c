// file operation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr=NULL;
    ptr=fopen("myfile.txt","r");
    char c=fgetc(ptr);
    printf("the character I read was %c\n",c);
    return 0;
}
