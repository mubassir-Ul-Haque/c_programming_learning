#include <stdio.h>
int main() {
  int n;
  printf("enter the number :  ");
  scanf("%d", &n);
  // 100-81---> A Grade
  // 80-61---> B Grade
  // 60-41---> C Grade
  // 40-0 ---> D Grade
  // mubassir ul haque's school
  if (n >= 81 && n <= 100)
    printf("A Grade\n");
  else if (n >= 61 && n <= 80)
    printf("B Grade\n");
  else if (n >= 41 && n <= 60)
    printf("C Grade\n");
  else if (n >= 0 && n <= 40)
    printf("D Grade\n");
  else
    printf("invalid input\n");
  return 0;
}