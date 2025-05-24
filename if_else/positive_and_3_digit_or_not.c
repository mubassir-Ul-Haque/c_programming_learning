#include <stdio.h>
int main() {
  int n;
  printf("enter the number :  ");
  scanf("%d", &n);

  if (n < 0) {
    printf("enter a positive number\n");
  } else if (n > 99 && n < 1000) {
    printf("3 digit number\n");
  } else {
    printf("not a 3 digit number\n");
  }

  return 0;
}