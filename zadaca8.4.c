#include <stdio.h>
#include <stdlib.h>

void VnesiMatrica(int a[][10], int n, int m)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        printf("Vnesi gi elementite od redica %d: \n", i+1);
        for (j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void PecatiMatrica(int a[][10], int n, int m)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m,n,i,j;
    int a[10][10];
    printf("Vnesi broj na redici: ");
    scanf("%d", &n);
    printf("Vnesi broj na koloni: ");
    scanf("%d", &m);
    VnesiMatrica(a, n, m);
    PecatiMatrica(a, n, m);


    return 0;
}
