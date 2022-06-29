#include <stdio.h>
#include <stdlib.h>

int nzd (int x, int y)
{
   if(x>y)
      return nzd(x,y);
   if(y==0)
      return x;
   else
      return nzd(y,x%y);
}

int main()
{
    int a,b;
    printf("Vnesi dva broja: \n");
    scanf("%d%d", &a, &b);
    printf("Najgolemiot zaednicki delitel na broevite %d i %d e %d.", a, b, nzd(a,b));
    return 0;
}


