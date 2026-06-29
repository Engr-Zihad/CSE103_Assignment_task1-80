#include <stdio.h>
int main() {
    int n, original;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    if (n < 0) {
        n = -n;
    }
    printf("Absolute value of %d is %d.", original, n);
    return 0;
}
