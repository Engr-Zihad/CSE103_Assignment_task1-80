#include <stdio.h>
int main() {
    int n, i, count = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 5 == 0) {
            count++;
        }
    }
    printf("There are %d numbers divisible by 5 from 1 to %d.", count, n);
    return 0;
}
