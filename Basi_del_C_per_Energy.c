#include <stdio.h>
#include <stdlib.h>

#define Carattere 'n'
#define Numero 1
#define Float 2.5
#define Stringa "Porcoddio"

int main(int argc, char *argv[])
{
    //Comandi di output
    printf("Il Valore di Carattere: %c\n", Carattere);
    printf("Il Valore di Numero: %i\n", Numero);
    printf("Il valore di Float: %1.2f\n", Float);
    printf("Il valore di Stringa: %s\n", Stringa);

    //Variabili
    int Var1 = 0;

    int Var2;
    Var2 = 0;

    int Intero;      //Variabile Numero Intero
    float Decimale;  //Variabile Numero Decimale
    char Car;        //Variabile Carattere
    char ArrayC[10]; //Variabile Stringa

    //Comandi di Input
    scanf("%i", &Intero);
    printf("Il valore di Intero e': %i\n", Intero);

    return 1;

    /*
    Scrittura:
    Variabile   :   [TIPO] [NOME] = [VALORE];
    Output      :   printf("[STRINGA] [TIPO]", [NOME]);
    Input       :   scanf("[TIPO]", &[NOME]);

    */
}