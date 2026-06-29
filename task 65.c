#include <stdio.h>
int main() {
    int x, result;
    printf("Enter value of x: ");
    scanf("%d", &x);
    result = 2 * x + 1;
    printf("f(%d) = %d.\n", x, result);
    if (result % 2 == 0) {
        printf("%d is an even number.", result);
    } else {
        printf("%d is an odd number.", result);
    }
    return 0;
}
