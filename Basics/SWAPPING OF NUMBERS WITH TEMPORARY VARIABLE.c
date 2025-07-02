#include <stdio.h>
int main() {
  int num, num2, temp;
  printf("Enter two integer: ");
  scanf("%d %d", &num,&num2);
  temp=num2;
  num2=num;
  num=temp;
  printf("%d %d Swapped numbers",num,num2);
  return 0;
}
