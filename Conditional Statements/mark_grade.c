#include <stdio.h>

int main() {
    int i;
    printf("Enter the mark: ");
    scanf("%d",&i);
    if (i==100){
        printf("Grade S");}
    else if (i>=90 && i<=99){
        printf("Grade A");}
    else if (i>=80 && i<=89){
        printf("Grade B");}
    else if (i>=70 && i<=79){
        printf("Grade C");}
    else if (i>=60 && i<=69){
        printf("Grade D");}
    else if (i>=50 && i<=59){
        printf("Grade E");}
    else
        printf("Grade F");
        
    return 0;
}
