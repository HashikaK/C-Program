#include <stdio.h>

int divisors(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
            fact*=i;
    }
    return fact;
}
int main() {
    int a,b,c,sum;
    scanf("%d %d %d",&a,&b,&c);
    sum=divisors(a)+divisors(b)+divisors(c);
    printf("%d",sum);

}
