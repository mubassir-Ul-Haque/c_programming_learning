#include <stdio.h>
int main() {
  int n;
  printf("enter a number :  ");
  scanf("%d", &n);
  int x = n;
  int r = 0;
  int is_negetive = 0;
  if (n < 0)
    is_negetive = 1;
  if (n < 0)
    n = -n;
  while (n > 0) {
    r = r * 10;
    r = r + (n % 10);
    n = n / 10;
  }
  if (is_negetive)
    r = -r;
int sum=x+r;
  printf("sum of the given number --> %d and its reverse --> %d is %d\n", x, r,sum);
  return 0;
}