#include <stdio.h>
int main() {
  int n;
  printf("enter number :  ");
  scanf("%d", &n);

  if (n % 3 == 0 && n % 5 == 0) {
    printf("divisible by 5 and 3\n");
  } else {
    printf("not divisible by 5 and 3\n");
  }

  return 0;
}