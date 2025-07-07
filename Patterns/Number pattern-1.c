
#include <stdio.h>
int main() {
    int i, j, num = 1, rows;
    scanf("%d", &rows);  
    for (i = 1; i <= rows; i++) {
        if (i % 2 == 1) {
            for (j = 0; j < 5; j++) {
                printf("%d ", num++);
            }
        } else {
            int temp[5];
            for (j = 0; j < 5; j++) {
                temp[j] = num++;
            }
            for (j = 4; j >= 0; j--) {
                printf("%d ", temp[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
