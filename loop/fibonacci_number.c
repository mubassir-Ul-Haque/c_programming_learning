#include <stdio.h>
int main() {
  int n;
  printf("enter a number :  ");
  scanf("%d", &n);

  int a = 0;
  int b = 1;
  int sum;

  if (n == 1) {
    sum = a;
  } else if (n == 2) {
    sum = b;
  } else {
    int i = 1;
    while (i <= n-2) {
      sum = a + b;
      a = b;
      b = sum;
      i++;
    }
  }

  printf("the %dth fibonacci number is %d\n", n, sum);
  return 0;
}

