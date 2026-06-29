#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 3 == 2) {
        printf("%d leaves remainder 2 when divided by 3.", n);
    } else {
        printf("%d does not leave remainder 2 when divided by 3.", n);
    }
    return 0;
}
