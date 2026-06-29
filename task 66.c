#include <stdio.h>
int main() {
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    if (a > b) {
        printf("%d is greater than %d.", a, b);
    } else {
        printf("%d is not greater than %d.", a, b);
    }
    return 0;
}
