#include <stdio.h>

/*
6. Defina uma funcao para inverter um numero. Exemplo: f(1234) = 4321
(a) No formato nao recursivo;
(b) No formato recursivo.
*/

int inverterNumeroRecursivo(int n, int invertido) {
    if (n == 0) {
        return invertido;
    }
    // Caso base: quando o número for 0, retorna o número invertido.

    int ultimoN = n % 10;
    // Pega o último dígito do número.

    invertido = invertido * 10 + ultimoN;
    // Constrói o número invertido multiplicando o invertido atual por 10 e somando o último dígito.

    return inverterNumeroRecursivo(n / 10, invertido);
    // Chama recursivamente a função com o número sem o último dígito e o invertido atualizado.
}

int inverterNumero(int n) {
    int invertido = 0, ultimoN;
    // Declaração de variáveis para armazenar o número invertido e o último dígito.

    while (n > 0) {
        ultimoN = n % 10;
        // Pega o último dígito do número.

        invertido = invertido * 10 + ultimoN;
        // Constrói o número invertido multiplicando o invertido atual por 10 e somando o último dígito.

        n /= 10;
        // Remove o último dígito do número original.
    }

    return invertido;
}

int main() {
    int n, invertido;

    printf("insira 4 valores sequenciais: ");
    scanf("%i", &n);
    invertido = inverterNumeroRecursivo(n, 0);
    printf("\nInvertido recursivo: %i", invertido);
    // Chama a função recursiva para inverter o número e imprime o resultado.

    invertido = inverterNumero(n);
    printf("\nInvertido nao recursivo: %i", invertido);
    // Chama a função não recursiva para inverter o número e imprime o resultado.

    return 0;
 }
