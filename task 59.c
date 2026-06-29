#include <stdio.h>
int main() {
    int x, result;
    printf("Enter value of x: ");
    scanf("%d", &x);
    result = x * x + 2 * x + 1;
    printf("f(%d) = %d.", x, result);
    return 0;
}
