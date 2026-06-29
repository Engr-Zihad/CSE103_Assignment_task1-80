#include <stdio.h>
int main() {
    int lower, upper, n;
    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);
    printf("Enter number: ");
    scanf("%d", &n);
    if (lower < n && n < upper) {
        printf("%d is between %d and %d.", n, lower, upper);
    } else {
        printf("%d is not between %d and %d.", n, lower, upper);
    }
    return 0;
}
