#include <stdio.h>
#include <stdlib.h>

long fibonacci(int n)
{
    long a[n];
    a[0] = 0;
    a[1] = 1;
    int i;
    for (i=2; i<=n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    return a[n];
}

int main()
{
   int n;
   printf("Vnesi cel broj: " );
   scanf("%d", &n);
   printf("Fibonacci(%d) = %ld\n", n, fibonacci(n));

   return 0;
}


