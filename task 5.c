#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a< b && a< c)
        printf("%d is the smallest number.", a);
    else if (b< c && b< a)
        printf("%d is the smallest number.", b);
    else if (c< a && c< b)
        printf("%d is the smallest number.", c);
    else
        printf("All numbers are equal.", c);
    return 0;
}
