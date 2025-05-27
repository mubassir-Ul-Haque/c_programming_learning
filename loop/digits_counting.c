#include <stdio.h>
int main() {
  int n;
  printf("enter a number :  ");
  scanf("%d", &n);
  int x = n;
  int count = 0;
  if (n == 0)
    count = 1;
  else if (n < 0)
    n = n * (-1);
  while (n > 0) {
    n = n / 10;
    count++;
  }
  printf("number of digits in %d is %d\n", x, count);
  return 0;
}