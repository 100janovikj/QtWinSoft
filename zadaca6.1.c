#include <stdio.h>
#include <stdlib.h>

int main()
{
    int F;
    float C;
    printf("%10s%10s\n", "Fahrenheit", "Celsius");
    for (F=0; F<=212; F++)
    {
        C = 5.0*(F-32)/9.0;
        printf("%10d%+10.2f\n", F, C);
    }
    return 0;
}
