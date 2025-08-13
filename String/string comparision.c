#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);
    int a = strcmp(s1 + strlen(s1) - 5, ".java") == 0;
    int b = strcmp(s2 + strlen(s2) - 5, ".java") == 0;
    if (a && b)
        printf("2\n");
    else if (a || b)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
