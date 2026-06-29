#include <stdio.h>
#include <math.h>
int main() {
    int n, root;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("%d is not a perfect square.", n);
    } else {
        root = (int)sqrt(n);
        if (root * root == n) {
            printf("%d is a perfect square.", n);
        } else {
            printf("%d is not a perfect square.", n);
        }
    }
    return 0;
}
