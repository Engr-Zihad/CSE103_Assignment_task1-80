// Reverse the Digits of an Integer
#include <stdio.h>
int main() {
    int n, rev = 0, original;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n > 0) {                                                                                   
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    printf("Reverse of %d is %d.", original, rev);
    return 0;
}
