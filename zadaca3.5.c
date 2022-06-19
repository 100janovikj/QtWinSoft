#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    printf("Vnesi go radisuot na kruznicata: \n");
    scanf("%d", &r);
    printf("Perimetarot na kruznica so radius %d e %f, a plostinata e %f.", r, 2*3.14*r, 3.14*r*r);

    return 0;

}
