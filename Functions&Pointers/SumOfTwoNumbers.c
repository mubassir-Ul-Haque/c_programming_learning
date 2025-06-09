#include <stdio.h>
int add(int a, int b) { return a + b;}
int main() {
  int a;
  printf("Enter 1st number : ");
  scanf("%d", &a);
  int b;
  printf("Enter 2nd number : ");
  scanf("%d", &b);
  printf("Sum of %d and %d is %d\n", a, b, add(a,b));
  return 0;
}