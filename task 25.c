#include <stdio.h>
int main() {
    int n, i, max, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    scanf("%d", &max);
    for (i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }
    printf("Maximum element is %d.", max);
    return 0;
}
