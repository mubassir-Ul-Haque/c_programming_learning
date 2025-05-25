#include <stdio.h>
int main() {
  int n;
  printf("enter a number  : ");
  scanf("%d", &n);
  if ((n % 3 == 0 || n % 5 == 0) && n % 15 != 0)
    printf("divisible by 5 or 3 but not 15\n");
  else
    printf("the number is not matching the required condition\n");
  return 0;
}