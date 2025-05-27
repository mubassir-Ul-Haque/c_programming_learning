#include <stdio.h>
int main() {
  int n;
  printf("enter a number :  ");
  scanf("%d", &n);
  int factorial = 1;
  if (n < 0) {
    printf("math error\n");
    return 0;
  }
  for (int i = 1; i <= n; i++) {
    factorial = factorial * i;
     printf("the factorial of %d is %d\n", i, factorial);
  }
  return 0;
}