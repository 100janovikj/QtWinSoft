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

void prosti(int a[], int n)
{
    int i;
    for(i=1; i<n; i++)
    {
        if (prost(i))
            a[i] = 0;
    }
}
int main()
{
    int n, i;
    printf("Kolku elementi kje ima vo nizata?\n");
    scanf("%d", &n);
    int a[n];
    for (i=0; i<n; i++)
        a[i] = 1;
    prosti(a,n);
    printf("Prostite broevi do %d se: \n", n);
    for(i=0; i<n; i++)
    {
        if (a[i]==0)
            printf("%d ", i);
    }

    return 0;
}
