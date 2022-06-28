#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Vnesete broj pomal od 9999.\n");
    scanf("%d", &x);
    if (x<0 || x>9999)
        printf("Brojot ne e vo opseg 0-9990.");
    else
    {
        printf("Brojot %d pretstaven rimski e: ", x);

        while(x!=0)
        {
            if (x>=9000)    {
                printf("IX_");
                x-=9000;    }

            else if (x>=8000)   {
                printf("VIII_");
                x-=8000;        }

            else if (x>=7000)   {
                printf("VII_");
                x-=7000;        }

            else if (x>=6000)   {
                printf("VI_");
                x-=6000;        }

            else if (x>=5000)   {
                printf("V_");
                x-=5000;        }

            else if (x>=4000)   {
                printf("IV_");
                x-=4000;        }

            else if (x>=1000)   {
                printf("M");
                x-=1000;        }

            else if (x>=900)    {
                printf("CM");
                x-=900;         }

            else if (x>=500)    {
                printf("D");
                x-=500;         }

            else if (x>=400)    {
                printf("CD");
                x-=400;         }

            else if (x>=100)    {
                printf("C");
                x-=100;         }

            else if (x>=90)     {
                printf("XC");
                x-=90;          }

            else if (x>=50)     {
                printf("L");
                x-=50;          }

            else if (x>=40)     {
                printf("XL");
                x-=40;          }

            else if (x>=10)     {
                printf("X");
                x-=10;          }

            else if (x>=9)      {
                printf("IX");
                x-=9;           }

            else if (x>=5)      {
                printf("V");
                x-=5;           }

            else if (x>=4)      {
                printf("IV");
                x-=4;           }

            else if (x>=1)      {
                printf("I");
                x-=1;           }
        }
    }

    return 0;
}
