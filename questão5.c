#include <stdio.h>

/*
5. Defina uma funcao recursiva que, dado os valores inteiros de x1 e x2, determine y = x1x2
*/

int produtoRecursivo(int x1, int x2){
    if(x2 == 0){
        // Se o segundo número for 0, o produto é 0.
        return 0;
    }

    if(x2 == 1){
        // Se o segundo número for 1, o produto é igual ao primeiro número.
        return x1;
    }
    // Caso contrário, a recursão é usada para calcular o produto.
    return x1 + produtoRecursivo(x1, x2 - 1);
    // Retorna a soma do primeiro número com o produto de (x1, x2 - 1).
}

int main(){
    int produto, x1, x2;
    printf("digite dois numeros inteiros\n");
    // Solicita ao usuário para digitar dois números inteiros.

    scanf("%i", &x1);
    scanf("%i", &x2);
    // Lê os valores de x1 e x2 fornecidos pelo usuário.

    produto = produtoRecursivo(x1, x2);
    // Chama a função produtoRecursivo para calcular o produto.

    printf("\nproduto: %i", produto);
    // Imprime o resultado do produto.

    return 0;
}
