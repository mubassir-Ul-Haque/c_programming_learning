#include <stdio.h>
int maze(int a, int b) {
  int rightways = 0;
  int downways = 0;
  if(a==1 && b==1)
  return 1;
  if (a == 1)
    rightways += maze(a, b - 1);
  if (b == 1)
    downways += maze(a - 1, b);
if(a>1 && b>1){
  rightways += maze(a, b - 1);
  downways += maze(a - 1, b);
}
  // if (sr < er && sc < ec)
  int totalways = rightways + downways;
  return totalways;
}
int main() {
  int a;
  printf("Enter number of rows : ");
  scanf("%d", &a);
  int b;
  printf("Enter number of columns : ");
  scanf("%d", &b);
  int ways = maze(a, b);
  printf("number of ways is %d\n", ways);
  return 0;
}
