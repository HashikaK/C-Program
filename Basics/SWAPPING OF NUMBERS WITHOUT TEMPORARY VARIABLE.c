#include <stdio.h>
int main() {
  int num, num2;
  printf("Enter two integer: ");
  scanf("%d %d", &num,&num2);
  num=num+num2;
  num2=num-num2;
  num=num-num2;
  printf("%d %d Swapped numbers",num,num2);
  return 0; 
}
