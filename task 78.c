#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 1) {
        printf("%d leaves remainder 1 when divided by 2.", n);
    } else {
        printf("%d does not leave remainder 1 when divided by 2.", n);
    }
    return 0;
}
