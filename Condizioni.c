#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int var = 21;
    int var1 = 0;
    float var2 = 2.1;
    int var3 = 4;
    char var4 = 'A';
    //Array di caratteri, anche detta valigia di caratteri per noi plebei bastardi
    /*
    * DICHIARAZIONE ARRAY:
    * TIPO NOME_ARRAY[GRANDEZZA_ARRAY] = VALORI_ARRAY;
    * es.
    * int ArrayIntero[10] = {2,3,4,3,21,32};
    * char ArrayCarattere[50] = "Porcoddio pippo che cazzo fai?!"; -> E' una stringa.
    */
    char var5[8] = "unaroba\0";
    char pippoArray[8] = {'p', 'i', 'p', 'p', 'o', '\0'};
    int ArrayIntero[10] = {2, 3, 4, 3, 21, 32};

    printf("Il valore di var4 e': %c\n", var4);
    printf("Il valore di var5 e': %s\n", var5);

    if (var > var1)
    {
        printf("Dio è morto\n");
    }

    if (var1 < var)
    {
        printf("Lo so");
    }
}