#include <stdio.h>

/*
1. Escreva um programa para converter e imprimir os caracteres para os valores ASCII de 0 a 127.
O programa deve imprimir 10 caracteres por linha.
*/

int main() {
    char c; 
    int i, count = 0;

    for (i = 0; i < 127; i++) {
      // Inicia um loop que vai de 0 até 126.
        c = i;   
        // Atribui o valor de 'i' à variável 'c'.
        printf(" %c", c);
        // foi definido como 'c' para imprimir como caractere./ 
        count++;
        // Incrementa o contador 'count' por 1.
        if (count == 10) {
            // Verifica se já foram impressos 10 caracteres.
            printf("\n");
            // Imprime uma quebra de linha para começar uma nova linha.
            count = 0;
            // Reinicia o contador 'count' para 0.
        }
    }
    
    return(0);
}
