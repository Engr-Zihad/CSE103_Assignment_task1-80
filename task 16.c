#include <stdio.h>
int main() {
    int a, b, original_a, original_b, remainder;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    original_a = a;
    original_b = b;
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    printf("GCD of %d and %d is %d.", original_a, original_b, a);
    return 0;
}
