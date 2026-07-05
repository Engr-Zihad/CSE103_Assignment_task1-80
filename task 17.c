// Find the Least Common Multiple of Two Numbers
#include <stdio.h>
int main() {
    int a, b, original_a, original_b, remainder, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    original_a = a;
    original_b = b;
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    gcd = a;
    lcm = (original_a * original_b) / gcd;
    printf("LCM of %d and %d is %d.", original_a, original_b, lcm);
    return 0;
}
