#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, i, j, k, minuta;
    float x;
    printf("Kolku bakterii ima?\n");
    scanf("%d", &n);
    printf("Na kolku minuti se deli bakterijata?\n");
    scanf("%d", &i);
    printf("Na kolku minuti izumiraat del od zivite bakterii?\n");
    scanf("%d", &j);
    printf("Kolkav procent od bakteriite izumira na %d minuti?\n", j);
    scanf("%f", &x);
    x=x/100;
    printf("Po kolku minuti sakas da go presmetas borjot na bakteriite?\n ");
    scanf("%d", &k);

    for (minuta=1; minuta<=k; minuta++)
    {
        if (minuta%i==0)
           n = n * 2;

        if (minuta%j==0)
            n = n - ceil(x*n);
    }
    printf("Po %d minuti kje ima %d bakterii.", k, n);
    return 0;
}
