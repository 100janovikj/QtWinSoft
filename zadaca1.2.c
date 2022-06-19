#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    printf("Vnesi cel broj:\t");
    scanf("%d", &a);
    printf("\nVnesi cel broj:\t");
    scanf("%d", &b);
    printf("\nVnesi cel broj:\t");
    scanf("%d", &c);
    printf("\nVnesi cel broj:\t");
    scanf("%d", &d);
    printf("\nSumata na broevite %d, %d, %d i %d e %d.", a, b, c, d, a+b+c+d);
    return 0;
}
