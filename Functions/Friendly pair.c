#include <stdio.h>

int divisors(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    return sum;
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int sum1=divisors(a);
    int sum2=divisors(b);
    if(sum1/a==sum2/b){
        printf("Friendly Pair");
    }else{
        printf("Not friendly pair");
    }

    return 0;
}
