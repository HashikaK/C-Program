#include <stdio.h>
int main() {
    int hour, min;
    printf("Enter the hour and minutes: ");
    scanf("%d:%d",&hour,&min);
    if (hour>=1 && hour<=12 && min>=0 && min <=59){
            printf("Valid Time");
        }
    else{
        printf("Invalid time");
    }
    return 0;
}
