#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, brojac=0, i, j;
    printf("Vnesi go brojot na redici i koloni: \n");
    scanf("%d%d", &n, &m);
    int a[n][m];

    for (i=0; i<m; i+=2)
    {
        for (j=0; j<n; j++)
        {
            brojac++;
            a[j][i] = brojac;
        }
        brojac = brojac + n;
    }
    brojac = n;
    for (i=1; i<m; i+=2)
    {
        for (j=n-1; j>=0; j--)
        {
            brojac++;
            a[j][i] = brojac;
        }
        brojac = brojac + n;
    }
    printf("Generiranata matrica e: \n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
