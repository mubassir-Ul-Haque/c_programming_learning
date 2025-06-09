#include <stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        int first = 1;
        for(int space=1;space<=n-i;space++){
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%d ", first);

            // Update formula: iC(j+1) = iCj * (i - j) / (j + 1)
            first = first * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
