#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter two number :");
    scanf("%d %d",&a,&b);
    if (a==b){
        printf("The two numbers are equal.");
    }
    else {
        printf("The two numbers are not equal.");
    }
    return 0;
}
