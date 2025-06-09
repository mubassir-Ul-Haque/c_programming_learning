#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int n;
  int sum1 = 0;
  int sum2 = 0;
  printf("enter the last value of your array : ");
  scanf("%d", &n);
  int arr[n + 1];
  srand(time(NULL));
  int duplicatevalue = (rand() % n) + 1;
  int index = 0;
  int duplicateinserted=0;

  for (int i = 1; i <= n; i++) {
    arr[index++] = i;
     if (i == duplicatevalue && duplicateinserted == 0) {
            arr[index++] = i;
            duplicateinserted = 1;
        }
  }
  for (int i = 0; i < n+1; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
 for(int i=0;i<=n+1;i++){
    for(int j=i+1;j<=n+1;j++){
        if(arr[i]==arr[j])
        printf("duplicate number is %d",arr[i]);
    }
 }
  printf("\n");
  return 0;
}