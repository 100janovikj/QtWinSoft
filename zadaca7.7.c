#include <stdio.h>
#include <stdlib.h>

void PecatiRedica(int n)
{
    if (n < 1)
        return;
    printf("* ");
    PecatiRedica(n-1);
}

void Pecati(int n)
{
    if (n < 1)
        return;
    PecatiRedica(n);
    printf("\n");
    Pecati(n-1);

}

int main()
{
    Pecati(5);
    return 0;
}
