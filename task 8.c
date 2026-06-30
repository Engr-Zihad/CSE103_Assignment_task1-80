#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("First %d even numbers are: ", n);                                                                // Print the First n Even Numbers
    for(i = 2; i <= n * 2; i = i + 2) {
        printf("%d ", i);
    }
    return 0;
}
