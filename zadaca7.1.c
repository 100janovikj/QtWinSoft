#include <stdio.h>
#include <stdlib.h>

int paren(int a)
{
    int x;
    if (a%2)
        x = 0;
    else
        x = 1;
return x;
}


int main()
{
    int a[9];
    int i;
    printf("Vnesi 10 celi broevi:\n");
    for (i=0; i<10; i++)
    {
        printf("Vnesi go %dot broj: ", i+1);
        scanf("%d", &a[i]);
        if (a[i]<0)
        {
        printf("Vnesuvajte samo pozitivni broevi.\n");
        i--;
        }
        else
        printf("%d\n", paren(a[i]));
    }
    return 0;
}
