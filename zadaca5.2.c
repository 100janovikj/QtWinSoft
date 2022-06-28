#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double amount;
    double principal = 1000.0;
    double rate = .05;
    int year;

   printf( "%-8s%-25s\n", "Godina", "Vrednost na depozitot" );

   for ( year = 1; year <= 10; year++ ) {
      amount = principal * pow( 1.0 + rate, year );
      printf( "%-8d%-25.2f\n", year, amount );
   }

    return 0;
}
