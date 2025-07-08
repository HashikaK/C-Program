#include <stdio.h>

void harshad(int a) {
    int temp = a, sum = 0;
    while(a != 0) {
        int x = a % 10; 
        sum += x;       
        a /= 10;        
    }
    if(temp % sum == 0) {
        printf("Harshad Number\n");
    } else {
        printf("Not a Harshad Number\n");
    }
}

int main() {
    int n;
    // scanf("%d", &n);
    // harshad(n);
    harshad(18);  
    return 0;
}
