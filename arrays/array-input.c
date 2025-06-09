#include <stdio.h>
int main() {
  int arr[10];
  for (int i = 0; i <= 9; i++) {
    printf("enter element number %d : ", i + 1);
    scanf("%d", &arr[i]);
  }
  for (int i = 9; i >= 0; i--) {
    printf("%d\n", arr[i]);
  }
  return 0;
}