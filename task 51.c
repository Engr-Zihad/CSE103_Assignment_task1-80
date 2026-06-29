#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n >= 10 && n <= 50) {
        printf("%d is inside the range 10 to 50.", n);
    } else {
        printf("%d is outside the range 10 to 50.", n);
    }
    return 0;
}
