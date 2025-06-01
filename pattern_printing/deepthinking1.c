#include <stdio.h>
int main() {
  int n;
  printf("enter number of rows :  ");
  scanf("%d", &n);

  for (int row = n; row >= 1; row--) {
    for (int col = 1; col <= (n - row + 1); col++) {
      printf("%d", row);
    }
    printf("\n");
  }
  for (int row = 2; row <= n; row++) {
    for (int col = 1; col <= (n - row + 1); col++) {
      printf("%d", row);
    }
    printf("\n");
  }

  return 0;
}