//LIBRERIE DA INSERIRE IN OGNI PROGRAMMA
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//DICHIARAZIONE COSTANTE
/// #define NOME_COSTANTE VALORE_COSTANTE
#define NomeDivinità "Dio"

int main()
{
    //DICHIARAZIONE VARIABILE
    int var = 1;

    /* 
     * Normale printf:
     * printf("StringaDaStampare");
     * 
     * Printf con stampa di variabile o costante:
     * 1) Prima di tutto bisogna capire che tipo di valore vogliamo stampare.
     * 2) In base al valore prendere uno dei seguenti comandi:
     *      String  -> %s
     *      int     -> %i / %d
     *      float   -> %f
     *      char    -> %c
     *      double  -> %d
     * 3) printf("StringaDaStampare (comandovariabile es.%i)", NomeVariabile)
     * 
     * Comandi Utili nella printf:
     *  \n -> Vai a capo
     *  \t -> Tabba
    */
    printf("il valore di var e': %i\n", var);
    printf("Inserire il valore nuovo di var: ");

    /* 
     * Normale scanf:
     * 1) Prima di tutto bisogna capire che tipo di valore vogliamo prendere da input.
     * 2) In base al valore prendere uno dei seguenti comandi:
     *      String  -> %s
     *      int     -> %i / %d
     *      float   -> %f
     *      char    -> %c
     *      double  -> %d
     * 3) scanf("(comandovariabile es.%i)", &NomeVariabile);
    */
    scanf("%i", &var);
    printf("il nuovo valore di var e': %i", var);
    return 1;
}