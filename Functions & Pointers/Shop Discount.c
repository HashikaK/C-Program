#include <stdio.h>

int main(){
    int p,n,r;
    scanf("%d\n%d\n%d",&p,&n,&r);
    float i,a,dis=0.2,final;
    i=(p*n*r)/100;
    a=p+i;
    final=a-dis;
    printf("Interest: %.2f\n",i);
    printf("Amount: %.2f\n",a);
    printf("Discount: %.2f\n",dis);
    printf("Final Amount: %.2f\n",final);
    return 0;
}