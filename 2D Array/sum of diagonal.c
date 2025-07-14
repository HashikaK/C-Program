#include <stdio.h>

int main() {
    int n, matrix[10][10], sum = 0;
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];   
    }
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}
