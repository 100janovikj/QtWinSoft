#include <stdio.h>
#include <stdlib.h>

int main()
{
    float promet;

    printf("Vnesi promet vo evra (-1 za kraj): ");
    scanf("%f", &promet);

    while (promet != -1.0)
    {
        printf("Platata e: %.2f evra.\n\n", 200 + 0.09*promet);
        printf("Vnesi promet vo evra (-1 za kraj): ");
        scanf("%f", &promet);
    }
    return 0;
}
