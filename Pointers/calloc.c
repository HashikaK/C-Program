#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *ptr;
    ptr=calloc(5,1);
    strcpy(ptr,"Hello");
    printf("%s\n",ptr);
}