#include <stdio.h>
int main() {
  int a, b, c, d;
  printf("enter 1st number :  ");
  scanf("%d", &a);
  printf("enter 2nd number :  ");
  scanf("%d", &b);
  printf("enter 3rd number :  ");
  scanf("%d", &c);
  printf("enter 4th number :  ");
  scanf("%d", &d);

  if (a >= b && a >= c && a >= d)
    printf("The greatest number is: %d\n", a);
  else if (b >= a && b >= c && b >= d)
    printf("The greatest number is: %d\n", b);
  else if (c >= a && c >= b && c >= d)
    printf("The greatest number is: %d\n", c);
  else
    printf("The greatest number is: %d\n", d);

  return 0;
}