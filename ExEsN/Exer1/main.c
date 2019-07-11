#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkLetter(char *wordVerify, int length, int revLength) {

    if (length < revLength) return 1; //quando meu comparador que come�ou em 0 for maior que o comparador que come�ou da ultima letra,
                                      //significa que todas as letras j� foram comparadas
    else {
        if (wordVerify[length] != wordVerify[revLength]) return 0; //caso a comparacao letra a letra n�o seja igual, j� me retorna false (0)

        return checkLetter(wordVerify, length-1, revLength+1); //chamada recursiva para ter um incremento/decremento dos indices a serem comaparados
    }
}



int checkPalindromo(char *wordVerify) {
    int funResult = 0, aux = 0;

     //
    /*
    chamada da funcao que fara a verificacao se � palindromo,
    passado os parametros que � a palavra em siwordVerify
    o tamanho da string -1 pois a string come�a no indice 0
    e a contagem pelo strlen come�a por 1, aux � passado como 0
    pois ele � o indice que ser� comaparado ao parametro anterior (strlen)
    ou seja estarei comparando a primeira letra com a ultima, na primeira chamada
    */
    funResult = checkLetter(wordVerify, strlen(wordVerify) - 1, aux);

    return funResult == 1 ? 1 : 0; //retorno para a chamada principal se � palindromo ou n�o
}



int main()
{
    char strWord[32];
    int result = 0;

    printf("Digite uma palavra, para verificar se e um Palindromo: ");
    gets(strWord); // Salvando o que foi digitado na variavel

    result = checkPalindromo(strWord); // chamada e espera de retorno da funcao

    result == 1 ? printf("\n A palavra %s e um palindromo\n", strWord) : printf("\n A palavra %s nao e um palindromo\n", strWord);

    return 0;
}
