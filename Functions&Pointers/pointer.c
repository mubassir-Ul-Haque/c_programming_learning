#include <stdio.h>
int main() {
  int a = 10;
  int *x = &a;
  int **y = &x;

  printf("%p\n", x);
  printf("%p\n", &a);
  printf("%p\n", &x);
  printf("%d\n", *x);
  printf("%p\n", y);

  *x = 4;
  printf("%d\n", a);

  return 0;
}