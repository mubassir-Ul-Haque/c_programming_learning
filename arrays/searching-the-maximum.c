#include <stdio.h>
int main() {
  int x;
  int sum = 0;
  printf("enter size of array : ");
  scanf("%d", &x);
  int arr[x];
  int max = arr[0];
  for (int i = 0; i <= x - 1; i++) {
    printf("enter value of element %d :", i + 1);
    scanf("%d", &arr[i]);
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  printf("biggest element is %d\n", max);
  return 0;
}