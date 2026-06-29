#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if (a % 3 == b % 3) {
        printf("%d and %d are congruent modulo 3.", a, b);
    } else {
        printf("%d and %d are not congruent modulo 3.", a, b);
    }
    return 0;
}
