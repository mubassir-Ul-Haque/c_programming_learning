#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int a = 0, b = 1, sum, count = 2;

    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else if (n == 1) {
        printf("1st Fibonacci number is: %d\n", a);
    } else {
        printf("1st Fibonacci number is: %d\n", a);
        printf("2nd Fibonacci number is: %d\n", b);

        while (count < n) {
            sum = a + b;
            count++;
            printf("%dth Fibonacci number is: %d\n", count, sum);
            a = b;
            b = sum;
        }
    }

    return 0;
}
