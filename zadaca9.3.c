#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, pom, y=0;
    printf("Vnesi broj: ");
    scanf("%d", &x);
    while (x!=0)
    {
        pom = x%10;
        y = 10*y + pom;
        x = x/10;
    }
    printf("Sprotivniot broj e %d.", y);
    return 0;
}
