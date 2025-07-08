#include <stdio.h>
int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++) {
        for (int s = 1; s <=i-1; s++) {
            printf(" ");
        }
        for (int j = 1; j <= n+1-i; j++) {
            printf("* ");
        }        
        printf("\n");
    }
    return 0;
}