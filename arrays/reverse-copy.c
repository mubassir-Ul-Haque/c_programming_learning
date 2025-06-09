#include <stdio.h>
int main() {
  int x;
  printf("enter size of array : ");
  scanf("%d", &x);
  int arr[x];
  int brr[x];
  for (int i = 0; i <= x - 1; i++) {
    printf("enter value of element %d :", i + 1);
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i <= x - 1; i++) {
    printf("%d  ", arr[i]);
  }
  printf("\n");
  for (int i = 0; i <= x - 1; i++) {
    brr[i] = arr[(x-1)-i];
  }
  for (int i = 0; i <= x - 1; i++) {
    printf("%d  ", brr[i]);
  }
  printf("\n");
  return 0;
}