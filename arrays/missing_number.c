#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int n;
  int sum1 = 0;
  int sum2 = 0;
  printf("enter the last value of your array : ");
  scanf("%d", &n);
  int arr[n - 1];
  srand(time(NULL));
  int missing = (rand() % n) + 1;
  int index = 0;
  for (int i = 0; i <= n; i++) {
    if (i == missing) {
      continue;
    }
    arr[index++] = i + 1;
  }
  for (int i = 0; i < n - 1; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  sum1 = (n * (n + 1) / 2);
  printf("%d ", sum1);
  printf("\n");
  for (int i = 0; i < n - 1; i++) {
    sum2 = sum2 + arr[i];
  }
  printf("%d ", sum2);
  printf("\n");
  if (sum1 == sum2) {
    printf("there is no missing number");
  } else {
    printf("In the array %d is missing", sum1 - sum2);
  }
  printf("\n");
  return 0;
}