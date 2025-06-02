#include <stdio.h>
int main() {
  int n,count;
  count=0;
  printf("enter number of rows :  ");
  scanf("%d", &n);
  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= row; col++) {
      printf("%d",++count);
    }
    printf("\n");
  }
  return 0;
}