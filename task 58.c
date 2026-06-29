#include <stdio.h>
int main() {
    int a, b, m = 5;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if (a % m == b % m) {
        printf("%d and %d have the same remainder modulo %d.", a, b, m);
    } else {
        printf("%d and %d do not have the same remainder modulo %d.", a, b, m);
    }
    return 0;
}
