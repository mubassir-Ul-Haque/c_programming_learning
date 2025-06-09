
#include <limits.h>
#include <stdio.h>
int main() {
  int x;
  int max = INT_MIN;
  int smax = INT_MIN;
  printf("enter size of array : ");
  scanf("%d", &x);
  int arr[x];
  for (int i = 0; i <= x - 1; i++) {
    printf("enter value of element %d :", i + 1);
    scanf("%d", &arr[i]);
    if (max < arr[i]) {
      smax = max;
      max = arr[i];
    } else if (smax < arr[i] && arr[i] != max) {
      smax = arr[i];
    }
  }
  printf("second largest element is %d\n", smax);
  return 0;
}