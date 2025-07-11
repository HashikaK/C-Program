#include <stdio.h>

int main() {
    int arr[100];  
    int n, k, i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate left: ");
    scanf("%d", &k);
    for (j = 0; j < k; j++) {
        temp = arr[0];  
        for (i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;  
    }
    printf("Rotated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
