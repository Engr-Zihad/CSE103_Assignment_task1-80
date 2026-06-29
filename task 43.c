#include <stdio.h>
int main() {
    int n, i, count = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0 || i % 3 == 0) {
            count++;
        }
    }
    printf("There are %d numbers divisible by 2 or 3 from 1 to %d.", count, n);
    return 0;
}
