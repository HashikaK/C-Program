#include <stdio.h>
int stack[5], top = 0;
void push(int value) {
    if (top == 5) {
        printf("Stack Overflow\n");
    } else {
        stack[top] = value;
        top += 1;  // Increment top after insertion
    }
}
int main() {
    int a = 5;
    push(a); 
    printf("Stack contents:\n");
    for (int i = 0; i < top; i++) {
        printf("%d ", stack[i]);
    }
    return 0;
}
