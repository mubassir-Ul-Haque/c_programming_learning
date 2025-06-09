#include <stdio.h>
int maze(int sr, int sc, int er, int ec) {
  int rightways = 0;
  int downways = 0;
  if (sr == er && sc == ec)
    return 1;
  if (sr == er)
    rightways += maze(sr, sc + 1, er, ec);
  if (sc == ec)
    downways += maze(sr + 1, sc, er, ec);
  if (sr < er && sc < ec) {
    rightways += maze(sr, sc + 1, er, ec);
    downways += maze(sr + 1, sc, er, ec);
  }
  int totalways = rightways + downways;
}
int main() {
  int a;
  printf("Enter number of rows : ");
  scanf("%d", &a);
  int b;
  printf("Enter number of columns : ");
  scanf("%d", &b);
  int ways = maze(1, 1, a, b);
  printf("number of ways is %d\n", ways);
  return 0;
}
