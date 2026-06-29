#include <stdio.h>
int main() {
    int num, n, i, multiple;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter how many multiples: ");
    scanf("%d", &n);
    printf("First %d multiples of %d are: ", n, num);
    for (i = 1; i <= n; i++) {
        multiple = num * i;
        printf("%d ", multiple);
    }
    return 0;
}
