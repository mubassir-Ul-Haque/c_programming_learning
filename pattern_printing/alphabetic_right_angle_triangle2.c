#include <stdio.h>
int main() {
  int n;
  printf("enter number of rows :  ");
  scanf("%d", &n);
  if (n >= 27) {
    printf("enter a number between 1 to 26\n");
    return 0;}
    for (int row = 1; row <= n; row++) {
      for (int col = 1; col <= row; col++) {
        printf("%c", row + 64);
      }
      printf("\n");
    }
    return 0;
  }