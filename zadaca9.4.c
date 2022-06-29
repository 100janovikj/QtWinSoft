#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i, j, sum;
    printf("Vnesi cel broj: ");
    scanf("%d", &n);
    printf("Sovrshenite broevi do brojot %d se: ", n);
    for(i=2; i<n; i++)
    {
        sum=0;
        for (j=1; j<i; j++)
        {
            if (i%j == 0)
            {
                sum+=j;
            }
        }
        if (sum == i)
            printf("%d ", i);
    }
    return 0;
}
