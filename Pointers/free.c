#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *ptr;
    ptr=malloc(6);
    strcpy(ptr,"Hello");
    printf("%s\n",ptr);
    free(ptr);
    printf("%s",ptr);
}