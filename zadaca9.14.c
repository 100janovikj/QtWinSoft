#include <stdio.h>
#include <stdlib.h>

void pecati1(int n)
{
    int i;
    if(n==0)
        return;
    else
        {
            pecati1(n-1);
            for(i=1; i<= n; i++)
                printf("%d ",i);
            printf("\n");
        }
}

void pecati2(int n)
{
    int i;
    if(n==0)
        return;
    else
        {
            for(i=1; i<=n; i++)
                printf("%d ",i);
            printf("\n");
            pecati2(n-1);
        }
}
int main()
{
    int n;
    printf("Koj broj? \n");
    scanf("%d", &n);
    printf("\n");
    pecati1(n);
    pecati2(n-1);
}
