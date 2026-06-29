#include <stdio.h>
int main() {
    int a, b, product;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    product = a * b;
    printf("Product is %d.\n", product);
    if (product % 2 == 0) {
        printf("%d is an even number.", product);
    } else {
        printf("%d is an odd number.", product);
    }
    return 0;
}
