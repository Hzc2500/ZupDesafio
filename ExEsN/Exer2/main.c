#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arrVal[5] = {0};
    int arrSum[5] = {0};
    int i = 0;

    for (i=0; i<5; i++) {
        printf("Digite o valor da posicao %d\n", i+1); //entrada de valores para cada posicao
        scanf("%d", &arrVal[i]);

        if (i==0) arrSum[i] = arrVal[i]; // se a posicao for inicial de indice 0, o valor sera igual para ambos arrays
        else arrSum[i] = arrSum[i-1] + arrVal[i]; // caso contrario soma o valor anterior com o novo
    }

    for (i=0; i<5; i++) { //for apenas para printar o resultado final
        printf("Array entrada posicao %d = %d\tArray saida posicao %d = %d\n", i, arrVal[i], i, arrSum[i]);
    }
}
