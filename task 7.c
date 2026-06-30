#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
     int factorial = 1;
        for(i = 1; i<= n; i++)                                                                            // Find the Factorial of a Number
        {
            factorial = factorial * i;
        }
        printf("Factorial of %d is %d.", n, factorial);
    return 0;
}
