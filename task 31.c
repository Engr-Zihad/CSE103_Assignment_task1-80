#include <stdio.h>
int main() {
    int n, i, cube = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 0; i * i * i <= n; i++) {
        if (i * i * i == n) {
            cube = 1;
            break;
        }
    }
    if (cube == 1)
        printf("%d is a perfect cube.", n);
    else
        printf("%d is not a perfect cube.", n);
    return 0;
}
