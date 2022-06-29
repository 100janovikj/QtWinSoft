#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int main()
{
    int n, i, kvadrat, kub, kv, kb, x, y, brojac;
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int br[10];
    for (n=1; n<=pow(INT_MAX, 1./3); n++)
    {
        kvadrat = n*n;
        kub = kvadrat*n;
        for (i=0; i<=9; i++)
            {
                br[i] = 0;
            }
        for (i=0; i<=9; i++)
        {
            kv = kvadrat;
            kb = kub;
            while (kv!=0)
            {
                x = kv%10;
                kv = kv/10;
                if (a[i] == x)
                    br[i]++;
            }
            while (kb!=0)
            {
                y = kb%10;
                kb = kb/10;
                if (a[i] == y)
                    br[i]++;
            }
        }
        brojac = 0;
        for (i=0; i<=9; i++)
        {
            if (br[i] == 1)
                brojac++;
        }
        if (brojac == 10)
            printf("Brojot %d ima kvadrat %d i kub %d.\n", n, kvadrat, kub);
    }

    return 0;
}
