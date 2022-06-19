#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=4, b=10, c=205;
    int total, prod, average;
    total = a+b+c;
    prod = a*b*c;
    average = (a+b+c)/3;
    printf("Srednata vrednost e %d, zbirot %d, a nivniot proizvod %d.", average, total, prod);
    return 0;
}
