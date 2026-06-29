#include <stdio.h>
int main() {
    int n, i, square;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Square numbers are: ");
    for (i = 1; i <= n; i++) {
        square = i * i;
        printf("%d ", square);
    }
    return 0;
}
