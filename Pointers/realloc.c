#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *ptr;
    ptr=malloc(6);
    ptr=realloc(ptr,10);
    strcpy(ptr,"Programming");
    printf("%s\n",ptr);
}