#include <stdio.h>
int main() {
  int a, b, c;
  printf("Enter 1st number :  ");
  scanf("%d", &a);
  printf("Enter 2nd number :  ");
  scanf("%d", &b);
  printf("Enter 3rd number :  ");
  scanf("%d", &c);

  if (a > b) { // b---> is out of equation
    if (a > c) {
      printf("%d is greatest\n", a);
    } else
      printf("%d is greatest\n", c);
  } else {
    if (b > c) { // c---> is out of equation
      printf("%d is greatest\n", b);
    } else
      printf("%d is greatest\n", c);
  }
  return 0;
}