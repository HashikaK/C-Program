#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (int i = n; i >=1; i--) {
        for (int j = 1; j <=i; j++) {
            printf("* ");
        }
        printf("\n");
    }

     for (int i = 2; i <=n; i++) {
        for (int j = 1; j <=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
