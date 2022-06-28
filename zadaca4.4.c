#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int i;
    for (i=1; i<=10; i++)
    {
        sum+=i;
    }
    printf("%d", sum);
    return 0;
}
