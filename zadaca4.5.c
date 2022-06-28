#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prod = 1;
    int a[9];
    int i;
    for (i=1; i<=10; i++)
    {
        printf("Vnesi go %dot broj: ", i);
        scanf("%d", &a[i-1]);
        prod*=a[i-1];
    }
    printf("\nProizvodot e: %d.", prod);
    return 0;
}
