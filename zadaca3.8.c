#include <stdio.h>
#include <stdlib.h>
int x=0;
int main()
{
    printf("%d", x++); //pecati 0, pa se zgolemuva za 1
    printf("%d", ++x); //se zgolemuva za 1, pa pecati 2
    x+=1;
    printf("%d", x);
    x=x+1;
    printf("%d", x);
    return 0;
}
