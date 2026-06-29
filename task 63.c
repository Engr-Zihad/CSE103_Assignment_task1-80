#include <stdio.h>
int main() {
    int x, y, result;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);
    result = x + y;
    printf("f(%d, %d) = %d.", x, y, result);
    return 0;
}
