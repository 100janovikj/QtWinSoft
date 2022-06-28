#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma = 0;
    int i;
    char c='d';

    while (c!='n')
    {
        printf("\nVnesi broj: ", i);
        scanf("%d", &i);
        suma+=i;
        printf("\nUshte? (d/n) ");
        scanf("\n%c", &c);
    }
    printf("\nSumata e: %d.", suma);
    return 0;
}
