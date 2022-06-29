#include <stdio.h>
#include <stdlib.h>
int palindrom(char a[])
{
    int i, n=0, brojac=0;
    for (i=0; a[i]!='\0'; i++)
    {
        n++;
    }
    for (i=0; a[i]!='\0'; i++)
    {
        if (a[i]==a[n-1-i])
            brojac++;
    }
    if (brojac==n)
        return 1;
    else
        return 0;
}

int main()
{
    char a[20];
    printf("Vnesi zbor:\n");
    scanf("%s", a);
    if (palindrom(a))
        printf("Zborot e palindrom.");
    else
        printf("Zborot ne e palindrom.");


    return 0;
}
