#include <stdio.h>
int main() {
    int num,even=0,odd=0;
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
        if(i%2==0){
            even+=i;
        }
        else{
            odd+=i;
        }
    }
    printf("Sum of even numbers: %d\n", even);
    printf("Sum of odd numbers: %d\n", odd);
    return 0;
}
