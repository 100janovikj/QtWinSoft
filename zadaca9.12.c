#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j=0, max, min;

    printf("Vnesi gi stepenite na dvata pominoma: \n");
    scanf("%d %d", &m, &n);
    m++; //brojot na koeficienti e vo polinomot e za eden pogolem od brojot na stepenot
    n++;
    int p1[m], p2[n];

    printf("Vnesi gi koeficientite na prviot polinom so stepen %d.\n", m-1);
    for (i=0; i<m; i++)
        scanf("%d", &p1[i]);

    printf("Vnesi gi koeficientite na vtoriot polinom so stepen %d.\n", n-1);
    for (i=0; i<n; i++)
        scanf("%d", &p2[i]);

    if (m>n)
    {
        max = m;
        min = n;
    }
    else
    {
        max = n;
        min = m;
    }

    int p[max];

    for (i=0; i<max-min; i++)
    {
        if (max==m)
            p[i] = p1[i];
        else
            p[i] = p2[i];

    }
    for (i=max-min; i<max; i++)
    {
        if (max==m)
            p[i] = p1[i] + p2[j];
        else
            p[i] = p1[j] + p2[i];
        j++;
    }


    printf("Koeficientite na zbirot na dvata polinomi se: ");
    for (i=0; i<max; i++)
        {
            printf("%d ", p[i]);
        }



    return 0;
}
