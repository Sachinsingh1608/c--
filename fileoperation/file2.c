// file operation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr=NULL;
    char string[34];
    ptr=fopen("x.txt","w");
    // char c=fgetc(ptr);
    // printf("the character I read was %c\n",c);
    fscanf(ptr,"%s",string);
    printf("the content of this file has %s\n",string);
    return 0;
}
