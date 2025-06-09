#include <stdio.h>
#include <math.h>
int main() {
  int a;
  printf("Enter  base : ");
  scanf("%d", &a);
   int b;
  printf("Enter  power : ");
  scanf("%d", &b);

  int root =  pow(a,b);
  printf("%d", root);

  return 0;
}