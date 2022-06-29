#include <stdio.h>
#include <stdlib.h>
int sprotiven(int x)
{
    int pom, y=0;
    while (x!=0)
    {
        pom = x%10;
        y = 10*y + pom;
        x = x/10;
    }
    return y;
}

int main()
{
    int a, b, hold, i;
    printf("Vnesi dva celi broja: ");
    scanf("%d%d", &a, &b);
    if (a>b)
    {
       hold = a;
       a = b;
       b = hold;
    }
    printf("Vo intervalot [%d,%d]: ", a, b);
    for (i=a; i<=b; i++)
    {
        if (i%sprotiven(i)==0)
            printf("Brojot %d e deliv so brojot %d\n", i, sprotiven(i));
    }


    return 0;
}
