#include <stdio.h>
#include <stdlib.h>
#define size 31

int main()
{
    int month, temp[size], i;
    float average=0.0;
    printf("Vnesi go redniot broj na mesecot za koj sakas da presmetas prosecna temperatura. \n");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Vnesi gi temperaturite za %dot mesec: \n", month);
        for (i=0; i<31; i++)
        {
            scanf("%d", &temp[i]);
            average+=temp[i];
        }
        printf("Prosecnata temperatura e: %.2f stepeni.", average/31);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Vnesi gi temperaturite za %dot mesec: \n", month);
        for (i=0; i<30; i++)
        {
            scanf("%d", &temp[i]);
            average+=temp[i];
        }
        printf("Prosecnata temperatura e: %.2f stepeni.", average/30);
        break;
    case 2:
        printf("Vnesi gi temperaturite za %dot mesec: \n", month);
        for (i=0; i<28; i++)
        {
            scanf("%d", &temp[i]);
            average+=temp[i];
        }
        printf("Prosecnata temperatura e: %.2f stepeni.", average/28);
        break;
    default:
        printf("Ne postoi mesec pod toj reden broj.");
        break;
    }

    return 0;
}
