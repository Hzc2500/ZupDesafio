#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bLim = 0, sLim = 0, aux = 0;

    printf("Digite primeiro o limite menor:\n");
    scanf("%d", &sLim);
    printf("Digite agora o limite maior:\n");
    scanf("%d", &bLim);

    if (sLim > bLim) { //caso os limites sejam digitados diferentes do pedido
        aux = bLim;
        bLim = sLim;
        sLim = aux;
    }

    if ((sLim + 1) % 2 == 0) aux = sLim + 2; //no caso estou excluindo o valor do limite, estou contando apenas o que esta dentro dele
    else aux = sLim + 1;                    //defino aux de acordo com o incremento realizado posteriormente

    for (aux; aux<bLim; aux = aux+2) {
        printf("%d, ",aux);
    }
    printf("\n");


    return 0;
}
