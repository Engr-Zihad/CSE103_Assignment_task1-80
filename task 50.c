#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n >= 1 && n <= 100) {
        printf("%d is within the range 1 to 100.", n);
    } else {
        printf("%d is outside the range 1 to 100.", n);
    }
    return 0;
}
