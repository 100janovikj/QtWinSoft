#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int obratno(int broj)
{
    int p;
    int br=0;
    while(broj!=0)
    {
        p = broj%10;
        br = 10*br + p;
        broj = broj/10;
    }
    return br;
}

int main()
{
    int broj = 1234;
    printf("%d", obratno(broj));
    return 0;
}
