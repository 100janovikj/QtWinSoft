#include <stdio.h>
#include <stdlib.h>

char a[4];
int i;
int main()
{
    printf("Vnesi pet bukvi:");
    for(i=1; i<=5; i++)
    {
        printf("\nVnesi ja %d-ta bukva: ", i);
        scanf("\n%c", &a[i-1]);
    }
     printf("\nSe dobi %c%c%c%c%c. ", a[4],a[2],a[1],a[0],a[3]);
    return 0;
}
