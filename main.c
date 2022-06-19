#include <stdio.h>
#include <stdlib.h>

int main()
{
    int broj, br, a, b, c, d, e;
    printf("Vnesi petcifren broj: ");
    scanf("%d", &broj);
    while (broj<10000 || broj>99999)
    {
        printf("Vneseniot broj ne e petcifren.\nVnesi petcifren broj:");
        scanf("%d", &br);
        broj = br;
    }
    a = broj/10000;
    broj = broj%(a*10000);
    b = broj/1000;
    broj = broj%(b*1000);
    c = broj/100;
    broj = broj%(c*100);
    d = broj/10;
    broj = broj%(d*10);
    e = broj;
    printf("%d %d %d %d %d", a, b, c, d, e);
    return 0;
}
