#include <stdio.h>
int main() {
    int a, b, quotient;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    quotient = a / b;
    printf("Quotient when %d is divided by %d is %d.", a, b, quotient);
    return 0;
}

