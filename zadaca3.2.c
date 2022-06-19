#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Vnesi dva broja:\n");
    scanf("%d%d", &a, &b);
    if (a%2)
        printf("Brojot %d e neparen.\n", a);
    else
        printf("Brojot %d e paren.\n", a);
    if (b%2)
        printf("Brojot %d e neparen.\n", b);
    else
        printf("Brojot %d e paren.\n", b);
    return 0;
}
