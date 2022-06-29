#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Kolku elementi kje ima vo nizata?\n");
    scanf("%d", &n);
    int a[n];
    printf("Vnesi gi elementite vo nizata: \n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Rastecki podnizi se: \n");
   if (a[0]<a[1])
        printf("%d ", a[0]);
    for (i=1; i<n-1; i++)
    {
        if (a[i]<a[i+1])
            printf("%d ", a[i]);
        else
        {
            if (a[i-1]<a[i])
                printf("%d \n", a[i]);
        }
    }
    if (a[n-2]<a[n-1])
        printf("%d", a[n-1]);
    return 0;
}
