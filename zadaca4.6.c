#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma = 0;
    int i;
    printf("Vnesi broj: ");
    scanf("%d", &i);
    while (i!=-1)
    {
        suma+=i;
        printf("Vnesi broj: ");
        scanf("%d", &i);
    }
    printf("\nZbirot e: %d.", suma);
    return 0;
}
