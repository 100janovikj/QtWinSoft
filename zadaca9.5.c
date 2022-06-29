#include <stdio.h>
#include <stdlib.h>

int prost(int x)
{
    int i, brojac=0;
    for(i=1; i<=x; i++)
    {
        if (x%i==0)
            brojac++;
    }
    if (brojac>2)
        return 0;
    else
        return 1;
}

int main()
{
    int i, n, j=0, brojac = 0;
    int a[20];
    printf("Vnesi cel broj: ");
    scanf("%d", &n);
    printf("Brojot %d razdelen na prosti mnoziteli e: ", n);
    for(i=2; i<=n; i++)
    {
        if (prost(i))
        {
           if(n%i == 0)
           {
               n = n/i;
               printf("%d ", i);
               i--;
           }
        }
    }
    return 0;
}
