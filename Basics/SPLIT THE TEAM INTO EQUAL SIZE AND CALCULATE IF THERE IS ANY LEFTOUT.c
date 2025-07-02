#include <stdio.h>
int main() {
  int num, num2,one,two;
  printf("Enter total menbers and team size: ");
  scanf("%d %d", &num,&num2);
  one=num/num2;
  two=num%num2;
  printf("Number of students in each team is %d and left out is %d", one,two);
  return 0;
}
