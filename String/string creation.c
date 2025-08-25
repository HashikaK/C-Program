#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("Enter the string: ");
scanf("%[^\n]",str);
printf("User entered string: %s",str);
}
