#include <stdio.h>
int main() {
  int num, num2,leng, quantity;
  printf("Enter the length and breadth of the ground: ");
  scanf("%d %d", &num,&num2);
  leng=2*(num+num2);
  quantity=num*num2;
  printf("Required length is %d m \n Required quantity of carpet is %d sq/m" ,leng,quantity);
  return 0;
}
