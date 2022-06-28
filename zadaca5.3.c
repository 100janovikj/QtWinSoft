#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    for (a=1; a<=100; a++)
    {
        for (b=a; b<=100; b++)
        {
            for (c=1; c<100; c++)
            {
                if (a*a + b*b == c*c)
                printf("%d^2 + %d^2 = %d^2\n", a, b, c);
            }
        }
    }
    return 0;
}
