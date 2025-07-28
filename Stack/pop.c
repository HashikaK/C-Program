#include <stdio.h>

int stack[5], top = -1;  // stack is empty initially

void push(int value) {
    if (top == 4) {
        printf("Stack Overflow\n");
    } else {
        top += 1;
        stack[top] = value;
        printf("%d pushed to stack\n", value);
    }
}
void pop() {
    if (top == -1) {
        printf("Stack Underflow (Stack is empty)\n");
    } else {
        int popped_value = stack[top];
        top -= 1;
        printf("%d popped from stack\n", popped_value);
    }
}
int main() {
    push(10);
    push(20);
    push(30);
    pop(); // Should remove 30
    pop(); // Should remove 20
    return 0;
}
