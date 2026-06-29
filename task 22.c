#include <stdio.h>
int main() {
    int A[] = {2, 4, 6, 8, 10};
    int size = 5;
    int x, i, found = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for (i = 0; i < size; i++) {
        if (A[i] == x) {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("%d belongs to the set A.", x);
    else
        printf("%d does not belong to the set A.", x);
    return 0;
}
