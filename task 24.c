#include <stdio.h>
int main() {
    int n, i, sum = 0, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("Sum of elements is %d.", sum);
    return 0;
}
