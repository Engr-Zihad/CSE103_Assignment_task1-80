// Check Whether a Number is Palindrome
#include <stdio.h>
int main() {
    int n, original, rev = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n > 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }
    if (original == rev)
        printf("%d is a palindrome number.", original);
    else
        printf("%d is not a palindrome number.", original);
    return 0;
}
