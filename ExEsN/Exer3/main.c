#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arrWord[32] = {0};
    char arrRev[32] = {0};
    int i =0;

    printf("Digite uma palavra:\n");
    gets(arrWord);

    for (i=0; arrWord[i]!='\0'; i++) {
        /*
        Salvo na primeira posicao do array arrRev
        o que est� na ultima posicao (-1 pois strlen come�a a contar do 1 e n�o do 0)
        do array arrWord e isso continua com o incremento de i (1 em 1)
        */
    arrRev[i] = arrWord[strlen(arrWord)-1-i];
    }

    puts(arrWord);
    puts(arrRev);
    return 0;
}
