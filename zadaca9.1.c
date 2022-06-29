#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    float P, L;
    printf("Vnesi go brojot na stranite: \n");
    scanf("%d", &n);
    P = n/(4*tan(M_PI/n)); //dolzinata na stranite zemena da e 1 bidejkji nema soodveten podatok
    L = 2*P; //apotemata zemena da e ednakva na 1 bidejkji nema soodveten podatok
    printf("Pravilen mnoguagolnik so %d agli ima plostina %.2f i perimetar od %.2f edinici.", n, P, L);
    return 0;
}
