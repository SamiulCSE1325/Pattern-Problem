#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }

    return 0;
}
