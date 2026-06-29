#include <stdio.h>
int main() {
    int n, i, j, count;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    count = 0;
    for (i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            count++;
        }
    }
    printf("Number of elements in the set is %d.\n", count);
    return 0;
}
