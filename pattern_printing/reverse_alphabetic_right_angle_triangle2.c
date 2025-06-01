#include <stdio.h>
int main() {
  int n;
  printf("enter number of rows :  ");
  scanf("%d", &n);

  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= n-row+1; col++) {
     printf(" %c",row+64);
    }
    printf("\n");
  }

  return 0;
}