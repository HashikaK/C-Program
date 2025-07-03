#include <stdio.h>
int main() {
    int n1,n2;
    printf("Enter an integer: ");
    scanf("%d %d", &n1, &n2);
    if (n1>n2) {
        printf("%d is greatest.\n", n1);
    } else {
        printf("%d is greatest.\n", n2);
    }
    return 0;
}
