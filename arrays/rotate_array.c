#include <stdio.h> //rotate array
void reverse(int arr[], int si, int ei) {
  for (int i = si, j = ei; i < j; i++, j--) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  return;
}
int main() {
  int n;
  int k;

  printf("enter the size of your array : ");
  scanf("%d", &n);
  printf("enter the terms you want to rotate: ");
  scanf("%d", &k);
  k = k % n;
  int arr[n];
  for (int i = 0; i <= n - 1; i++) {
    printf("enter the element no %d :", i + 1);
    scanf("%d", &arr[i]);
  }
  printf("\n");
  for (int i = 0; i <= n - 1; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  reverse(arr, 0, n - 1);
  for (int i = 0; i <= n - 1; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  reverse(arr, 0, k - 1);
  for (int i = 0; i <= n - 1; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  reverse(arr, k, n - 1);
  for (int i = 0; i <= n - 1; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}