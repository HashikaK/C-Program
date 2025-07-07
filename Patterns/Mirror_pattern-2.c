#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (int i = 0; i <=n; i++) {
        for (int s = 0; s <i; s++) {
            printf(" ");
        }
        for (int j = 0; j <n-i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = n-2; i >=0; i--) {
        for (int s = 0; s <i; s++) {
            printf(" ");
        }
        for (int j = 0; j <n-i; j++) {
            printf("* ");
        }
        printf("\n");
    }

     
    return 0;
}
