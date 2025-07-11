#include <stdio.h>

int main() {
    char a[50], b[50], c[100];
    int i = 0, j = 0;

    scanf("%s %s", a, b);

    while (a[i]) {
        c[i] = a[i];
        i++;
    }
    while (b[j]) {
        c[i++] = b[j++];
    }
    c[i] = '\0';

    printf("%s", c);
    return 0;
}
