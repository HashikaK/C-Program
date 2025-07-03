#include <stdio.h>
int main() {
    int i;
    printf("Enter a character: ");
    scanf("%s",&i);

    // If else ladder with three conditions
    if (i >= 97 && i <= 122 || i >= 65 && i <=90 ){
        printf("It is Alphabet");}
    else if(i>=48 && i<=57 ){
            printf("It is number");}
    else{
        printf("It is special character");}
        
    return 0;
}
