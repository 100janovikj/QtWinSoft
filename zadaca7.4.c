#include <stdio.h>
#include <stdlib.h>

int min(int a, int b)
{
    int x;
    if(a>b)
        x=b;
    else
        x=a;
    return x;
}

int nzd(int a, int b)
{
    int pom, del;
    pom = min(a,b);
    while(pom>0)
    {
        if (a%pom==0 && b%pom==0)
           {
              del = pom;
              pom=0;
           }
        pom--;
    }
    return del;
}

int main()
{
    int a,b,x;
    printf("Vnesi dva broja: \n");
    scanf("%d%d", &a, &b);
    x = nzd(a,b);
    printf("Najgolemiot zaednicki delitel na broevite %d i %d e %d.", a, b, x);
    return 0;
}
