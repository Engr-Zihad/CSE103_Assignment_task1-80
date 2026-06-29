#include <stdio.h>
int main() {
    int n, i, min, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    scanf("%d", &min);
    for (i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num < min) {
            min = num;
        }
    }
    printf("Minimum element is %d.", min);
    return 0;
}
