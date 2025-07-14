#include <stdio.h>

int main() {
    int a[10][10], b[10][10];
    int i, j, r, c;
    int equal = 1;

    // Input rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Compare both matrices
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] != b[i][j]) {
                equal = 0;
                break;
            }
        }
    }

    // Output result
    if (equal == 1)
        printf("Matrices are equal.\n");
    else
        printf("Matrices are not equal.\n");

    return 0;
}
