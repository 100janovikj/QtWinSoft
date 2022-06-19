#include <stdio.h>
#include <stdlib.h>

float result;
int main()
{
    result = 7.0 / 22.0;
    printf("Rezultatot e %d\n", result);
    //ne vadi tocen rezultat, bidejki promenlivata result e definirana kako float.
    //za da se ispecati celobroen priblizen rezultat treba da se promeni naredbata za pecatenje t.e. printf("Rezultatot e %d\n", (int)result);
        return 0;
}
