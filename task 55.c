#include <stdio.h>
int main() {
    int a, b, dist;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    dist = a - b;
    if (dist < 0) {
        dist = -dist;
    }
    printf("Distance between %d and %d is %d.", a, b, dist);
    return 0;
}
