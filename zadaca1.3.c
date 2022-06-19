#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1, b=2, c=3, d=4;
    printf("1, 2, 3, 4\n"); //a
    printf("%d, %d, %d, %d\n", a,b,c,d); //b
    printf ("%d, ", a); //v
    printf ("%d, ", b);
    printf ("%d, ", c);
    printf ("%d ", d);
    return 0;
}
