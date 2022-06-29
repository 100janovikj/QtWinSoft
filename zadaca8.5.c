#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int pozicija, pom, i, j;
void selekcija (int a[], int n)
{
    for (j=0; j<n-1; j++)
    {
        pozicija = j;
        for (i=j+1; i<n; i++)
        {
            if (a[i] < a[pozicija])
                 pozicija = i;
        }
        pom = a[j];
        a[j] = a[pozicija];
        a[pozicija] = pom;
    }
}

void rselekcija (int a[], int n, int j) //j=0
{
    pozicija = j;
    for (int i=j+1; i<n; i++)
    {
        if (a[i] < a[pozicija])
            pozicija = i;
    }
    pom = a[j];
    a[j] = a[pozicija];
    a[pozicija] = pom;
    if (j+1 < n)
        rselekcija(a, n, j+1);
}


int main()
{
    int i;
    int a[] = {3, 1024, -20, -10, 100, 23, 18};
    selekcija(a, 7);
    printf("Sortiranata niza e: ");
    for (i=0; i<7; i++)
    {
        printf( "%d ", a[i]);
    }
    rselekcija(a, 7, 0);
    printf("\nRekurzivno sortiranata niza e: ");
    for (i=0; i<7; i++)
    {
        printf( "%d ", a[i]);
    }
    return 0;
}
