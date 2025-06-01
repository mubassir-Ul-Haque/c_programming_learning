#include <stdio.h>
int main() {
  int n;
  printf("enter number of rows :  ");
  scanf("%d", &n);

  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= row; col++) {
      if (row % 2 == 0) {
        printf("0");
      } else
        printf("1");
    }
    printf("\n");
  }
  return 0;
}