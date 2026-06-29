#include <stdio.h>
int main() {
    int n, i, count = 0, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 != 0) {
            count++;
        }
    }
    printf("Number of odd elements is %d.", count);
    return 0;
}
