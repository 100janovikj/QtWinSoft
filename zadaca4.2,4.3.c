#include <stdio.h>
#include <stdlib.h>

int main()
{
   int counter;
   int students;
   int grade;
   int total;
   float average;
   printf("Vnesi go brojot na ucenici: ");
   scanf("%d", &students);
   total = 0;
   counter = 1;

   while ( counter <= students ) {
      printf( "Vnesi ocena: " );
      scanf( "%d", &grade );
      total = total + grade;
      counter = counter + 1;
   }

   average = (float)total / students;

   printf( "Srednata vrednost na klasot e %.3f\n", average );
    //opfateno e i resenieto na zadaca 4.3
    return 0;
}
