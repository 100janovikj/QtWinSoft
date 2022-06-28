#include <stdio.h>
#include <stdlib.h>

int main()
{
    int godina, mesec, den;
    char *m[] = {"januari", "februari", "mart", "april", "maj", "juni", "juli", "avgust", "septemvri", "oktomvri", "noemvri", "dekemvri"};
    printf("Vnesi datum vo oblik gggg/mm/dd, gggg-mm-dd ili gggg+mm+dd: ");
    scanf("%d%*c%d%*c%d", &godina, &mesec, &den);
    if (mesec>12 || den>31 || (den>30 && (mesec==4 || mesec==6 || mesec==9 || mesec==11)) || (den>29 && mesec==2))
        printf("Nevaliden datum.");
    else
        printf("Vneseniot datum e %d %s %d godina.", den, m[mesec-1], godina);

    return 0;
}
