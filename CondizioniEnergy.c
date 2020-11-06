#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    //Variabile booleane:
    bool Gay = true;
    bool NoGay = false;
    bool Normale = true;
    //Condizione IF:
    if (Gay == true){
        printf("Sono Gay\n");
    }
    

    if (Gay){
        printf("Sono Gay\n");
    }
    else if (Normale)
    {
        printf("Sono Normale\n");
    }

    int v1 = 2;
    int v2 = 4;

    if (v1 > v2)
    {
        printf("Prima IF: v1 > v2\n");
    }
    else if (v1 < v2)
    {
        printf("Seconda IF: v1 < v2\n");
    }
    else
    {
        printf("Terza IF: v1 = v2\n");
    }

    if (v1 == 1)
    {
        printf("Prima IF\n");
    }
    else if (v1 == 2)
    {
        printf("Seconda IF\n");
    }
    else if (v1 == 3)
    {
        printf("Terza IF\n");
    }
    else
    {
        printf("Non è nessuno dei valore interessati\n");
    }

    //Cicli
    //while & do-while
    int giri = 5;
    while (giri < 5)
    {
        printf("While: Giro n.%i\n", giri);
        //giri = giri + 1;
        giri++;
    }

    do
    {
        printf("Do-While: Giro n.%i\n", giri);
        //giri = giri + 1;
        giri++;
    } while (giri < 5);

    return 1;
    /*
    if ( condizione )
    {
        codice 
    }
    
    while ( condizione )
    {
        codice 
    }
    
    do
    {
        codice 
    } while ( condizione );
    */
}