#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter three numbers :");
    scanf("%d%d%d",&a,&b,&c1);
    if (a==b&&b==c){
        printf("All three numbers are equal.");
    }
    else {
        printf("All three numbers are not equal.");
    }
    return 0;
}

