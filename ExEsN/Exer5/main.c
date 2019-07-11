#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, bNum = 0, sNum = 0, somaTotal = 0;;
    int arrNum[5];

    printf("Digite 5 numeros \n");

    for (i=0; i<5; i++) {
    printf("Digite o %do numero:\n", i+1);
    scanf("%d", &arrNum[i]);
    somaTotal = somaTotal + arrNum[i]; //soma para subtrair pelo menor e o maior no final do programa

        if(i==0) {
            bNum = arrNum[i]; //meu primeiro numero é tanto o maior quanto o menor
            sNum = arrNum[i];
        } else {
            if (arrNum[i] > bNum) { //verificacao para ver se o novo numero é o maior
            bNum = arrNum[i];
          }
          else {
            if (arrNum[i] < sNum) { //verificacao para ver se o novo numero é o menor
                sNum = arrNum[i];
            }
          }
        }
    }

    printf("Maior numero = %d e soma maxima com 4 numeros = %d\n", bNum, somaTotal - sNum); //resultados
    printf("Menor numero = %d e soma minima com 4 numeros = %d\n", sNum, somaTotal - bNum);

    return 0;
}
