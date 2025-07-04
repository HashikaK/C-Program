#include <stdio.h>
int main() {
  int num, product=1;
  scanf("%d", &num);
  while(num){
    int a=num%10;
    num=num/10;
    product*=a;
  }
   printf("%d",product);
   return 0;
}

