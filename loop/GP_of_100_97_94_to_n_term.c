#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a = 100;       // First term
    int d = 3;         // Common difference

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        a = a - d;
    }

    printf("\n");
    return 0;
}
