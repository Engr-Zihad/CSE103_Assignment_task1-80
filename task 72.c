#include <stdio.h>
int main() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("Sum is %d.\n", sum);
    if (sum % 2 == 0) {
        printf("%d is an even number.", sum);
    } else {
        printf("%d is an odd number.", sum);
    }
    return 0;
}
