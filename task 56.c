#include <stdio.h>
int main() {
    int a, b, rem;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    rem = a % b;
    printf("Remainder when %d is divided by %d is %d.", a, b, rem);
    return 0;
}
