#include <stdio.h>
int countpairs(int arr[0], int size, int sum) {
  if (size < 2)
    return 0;
  int count = 0;
    for (int j = 1; j < size; j++) {
      if (arr[0] + arr[j] == sum)
        count++;
      printf("(%d %d)\n", arr[0], arr[j]);
    }
  return count + countpairs(arr+1, size - 1, sum);
}
int main() {
  int x;
  int y;
  printf("enter size of array : ");
  scanf("%d", &x);
  printf("enter sum : ");
  scanf("%d", &y);
  int arr[x];
  for (int i = 0; i <= x - 1; i++) {
    printf("enter value of element %d :", i + 1);
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i <= x - 1; i++) {
    printf("%d  ", arr[i]);
  }
  printf("\n");
  int numberofpairs = countpairs(arr, x, y);
  printf("number of pairs is %d\n", numberofpairs);
  return 0;
}