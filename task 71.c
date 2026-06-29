#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if ((a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 != 0)) {
        printf("%d and %d have the same parity.", a, b);
    } else {
        printf("%d and %d have different parity.", a, b);
    }
    return 0;
}
