#include <stdio.h>
#include <stdlib.h>

int vreme(int chas, int minuta, int sekunda)
{
    int s;
    s =((11 - chas)*3600)+((59 - minuta)*60)+(60-sekunda);
    return s;
}

int main()
{
    int c = 11;
    int m = 59;
    int s = 58;
    printf("Preostanuvaat uste %d sekundi do 12 chasot.", vreme(c,m,s));
    return 0;
}
