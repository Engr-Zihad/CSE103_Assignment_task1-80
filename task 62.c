#include <stdio.h>
int main() {
    int x, result;
    printf("Enter value of x: ");
    scanf("%d", &x);
    result = 2 * x * x + 3;
    printf("f(%d) = %d.", x, result);
    return 0;
}
