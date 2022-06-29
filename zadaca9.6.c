#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, x, pom, sum;
    printf("Vnesi cel broj: ");
    scanf("%d", &n);
    printf("Prirodnite broevi pomali od %d cij zbir na kubovite na cifrite e ednakov so samiot broj se: ", n);
    for (i=1; i<n; i++)
    {
        sum = 0;
        x = i;
        while (x!=0)
        {
           pom=x%10;
           sum+=pom*pom*pom;
           x/=10;
        }
        if (sum == i)
            printf("%d ", i);
    }
    return 0;
}
