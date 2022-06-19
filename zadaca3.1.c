#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Vnesi dva broja:\n");
    scanf("%d%d", &a, &b);
    if (a>b)
        printf("Brojot %d e pogolem od %d.", a, b);
    else if (a<b)
        printf("Brojot %d e pogolem od %d.", b, a);
    else
        printf("Broevite se ednakvi.");
    return 0;
}
