#include <stdio.h>
int main() {
  int l,b;
  printf("enter length :  ");
  scanf("%d", &l);
  printf("enter breadth :  ");
  scanf("%d", &b);
  int a=l*b;
  int p=2 * (l+b);
  if (a < p) {
    printf("perimeter is greater than area\n");
  } else if (a > p) {
    printf("area is greater than perimeter\n");
  } else {
    printf("area and perimeter id equal\n");
  }

  return 0;
}