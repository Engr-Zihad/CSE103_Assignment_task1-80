#include <stdio.h>
int main() {
    int x, result;
    printf("Enter value of x: ");
    scanf("%d", &x);
    result = 3 * x - 2;
    printf("f(%d) = %d.", x, result);
    return 0;
}
