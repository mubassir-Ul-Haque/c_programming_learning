#include <stdio.h>
int main() {
  int x, y;
  printf("enter coordinates : ");
  scanf("%d%d", &x, &y);
  if (x == 0 && y == 0) {
    printf("The point is origin\n");
  } else if (y == 0) {
    printf("The point lies on y-axis\n");
  } else if (x == 0) {
    printf("The point lies on x- axis\n");
  } else
    printf("The point does not lies on x or y axis\n");
  
  return 0;
}