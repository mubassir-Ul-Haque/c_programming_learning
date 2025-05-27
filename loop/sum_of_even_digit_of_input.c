#include <stdio.h>
int main() {
  int n;
  printf("enter a number  :  ");
  scanf("%d", &n);
  int x = n;
  int sum = 0;
  int ld;
  if(n<0) n=-n;
  while (n > 0) {
    int ld = n % 10;
    if (ld % 2 == 0) {
      sum = sum + ld;
    } n = n / 10;
    
  }
  printf("the sum of the even digit of the number %d is %d", x, sum);
  return 0;
}