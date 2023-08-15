#include <stdio.h>

/*
4. Um numero inteiro e considerado um numero perfeito se seus fatores, incluindo 1 (mas nao o
proprio numero), somam o numero. Por exemplo, 6 e um numero perfeito porque 6 = 1 + 2 + 3.
Escreva uma fun¸cao isPerfect que determina se o numero do parametro e um numero perfeito. Use
esta funcao em um programa que determina e imprime todos os numeros perfeitos entre 1 e 1000.
Imprima os fatores de cada numero perfeito para confirmar que o numero e realmente perfeito.
*/

int isPerfect(int n){
    int i;
    int soma = 0;

    for(i = 1; i <= n / 2; i++){
        // Loop que percorre números de 1 até a metade do número 'n'.

        if(n % i == 0){
            // Verifica se 'n' é divisível por 'i'.

            soma += i;
            // Se for divisível, adiciona 'i' à soma.
        }
    }
    // Ao final do loop, a soma contém a soma dos divisores próprios de 'n'.
    return soma == n;
}

int main(){
    int i, j;

    printf("Numeros perfeitos entre 1 e 1000:\n");

    for(i = 2; i <= 1000; i++){
        // Loop que percorre números de 2 até 1000.

        if(isPerfect(i)){
            // Verifica se o número 'i' é perfeito usando a função 'isPerfect'.

            printf("%d eh um numero perfeito. Fatores:", i);
            // Imprime uma mensagem indicando que 'i' é um número perfeito.

            for(j = 1; j < i; j++){
                // Loop que percorre números de 1 até 'i - 1'.

                if(i % j == 0){
                    // Verifica se 'i' é divisível por 'j'.

                    printf(" %d", j);
                    // Se for divisível, imprime o valor de 'j'.
                } 
            }
            // Ao final desse loop, imprimimos os divisores próprios de 'i'.
            printf("\n");
            // Pula para a próxima linha após imprimir os divisores de 'i'.
        }
    }
    // Ao final do loop principal, todos os números perfeitos entre 2 e 1000 foram impressos.
    return 0;
}
