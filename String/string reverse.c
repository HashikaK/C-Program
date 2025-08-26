// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int len;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    len=strlen(str);
    printf("Reversed string: ");
    for(int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}