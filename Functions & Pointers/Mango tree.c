#include <stdio.h>

int main() {
    int rows, cols, tree_no;
    scanf("%d %d %d", &rows, &cols, &tree_no);
    
    int col = (tree_no - 1) / rows + 1;

    if (col == 2 || col == cols - 1)
        printf("It is a mango tree\n");
    else
        printf("It is not a mango tree\n");

    return 0;
}
