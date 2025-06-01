#include <stdio.h>
int main() {
  int n;
  printf("enter number of rows :  ");
  scanf("%d", &n);

  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= n - row; col++) {
      printf(" ", col);
    }
    for (int col = 1; col <= row; col++) {
      printf("%d", col);
    }
    printf("\n");
  }
  return 0;
}