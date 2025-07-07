#include <stdio.h>

int main() {
    int x;
    printf("Enter number of rows: ");
    scanf("%d",&x);
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        for (int s = 0; s < x - i; s++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
