#include <stdio.h>
#include <stdlib.h>

int main()
{
    int proizvod;
    int kolicina[4];
    float cena[] = {-1, -1, -1, -1, -1};
    int i;
    printf ("Vnesi ja prodadenata kolicina za sekoj proizvod.\n");

    for (i=1; i<=5; i++)
    {
        printf("\nBroj na proizvod: (1-5) ");
        scanf("%d", &proizvod);
        switch(proizvod)
        {
            case 1:
                if (cena[0] == -1)
                {
                    printf("Kolicina na proizvod: ");
                    scanf("%d", &kolicina[0]);
                    cena[0] = 50.05*kolicina[0];
                    printf("Vkupnata prodadena vrednost za proizvod 1 e: %.2f.\n", cena[0]);
                }
                else
                {
                    printf("Vekje go vnesovte ovoj proizvod.\n ");
                    i--;
                }
                break;

            case 2:
                if (cena[1] == -1)
                {
                    printf("Kolicina na proizvod: ");
                    scanf("%d", &kolicina[1]);
                    cena[1] = 45.6*kolicina[1];
                    printf("Vkupnata prodadena vrednost za proizvod 2 e: %.2f.\n", cena[1]);
                }
                else
                {
                    printf("Vekje go vnesovte ovoj proizvod.\n ");
                    i--;
                }
                break;

            case 3:

                if (cena[2] == -1)
                {
                    printf("Kolicina na proizvod: ");
                    scanf("%d", &kolicina[2]);
                    cena[2] = 32.8*kolicina[2];
                    printf("Vkupnata prodadena vrednost za proizvod 3 e: %.2f.\n", cena[2]);
                }
                else
                {
                    printf("Vekje go vnesovte ovoj proizvod.\n ");
                    i--;
                }
                break;

            case 4:
                if (cena[3] == -1)
                {
                    printf("Kolicina na proizvod: ");
                    scanf("%d", &kolicina[3]);
                    cena[3] = 65.3*kolicina[3];
                    printf("Vkupnata prodadena vrednost za proizvod 4 e: %.2f.\n", cena[3]);
                }
                else
                {
                    printf("Vekje go vnesovte ovoj proizvod.\n ");
                    i--;
                }
                break;
            case 5:
                {

                if (cena[4] == -1)
                {
                    printf("Kolicina na proizvod: ");
                    scanf("%d", &kolicina[4]);
                    cena[4] = 20.0*kolicina[4];
                    printf("Vkupnata prodadena vrednost za proizvod 5 e: %.2f.\n", cena[4]);
                }
                else
                {
                    printf("Vekje go vnesovte ovoj proizvod.\n ");
                    i--;
                }
                break;
                }

            default:
                printf("Ne postoi takov proizvod.\n");
                i--;
                break;
        }
    }
    printf("\nSevkupnata prodadena vrednost e %.2f.", cena[0]+cena[1]+cena[2]+cena[3]+cena[4]);
    return 0;
}
