#include <stdio.h>
int main() {
    int n, i, cube;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Cube numbers are: ");
    for (i = 1; i <= n; i++) {
        cube = i * i * i;
        printf("%d ", cube);
    }
    return 0;
}
