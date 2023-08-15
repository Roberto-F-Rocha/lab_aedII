#include <stdio.h>

/*
7.Implemente a seguinte fun¸c˜ao matem´atica f(m, n) definida por partes:
(a) f(m, n) = m + 1, se n = 1.
(b) f(m, n) = n + 1, se m = 1.
(c) f(m, n) = f(m, n − 1) + f(m − 1, n), se m > 1, n > 1.
*/

int func(int m, int n){
    // Verifica se n é igual a 1.
    if(n == 1){
    // Retorna m + 1, pois essa é a regra (a) da função.
        return (m + 1);
    }
    // Verifica se m é igual a 1.
    else if(m == 1){
        // Retorna n + 1, pois essa é a regra (b) da função.
        return (n + 1);
    }
    // Caso m e n sejam ambos maiores que 1.
    else{
    // Chama a função 'func' recursivamente com argumentos modificados,
    // de acordo com a regra (c) da função, que envolve chamadas repetidas.
        return func(m, n - 1) + func(m - 1, n);
    }
}

int main(){
    int n, m;
    
    printf("Insira dois valores:\n");
    scanf("%i", &n);  // Lê o primeiro valor e armazena em 'n'.
    scanf("%i", &m);  // Lê o segundo valor e armazena em 'm'.
    
    // Chama a função 'func' com os valores lidos e armazena o resultado.
    int resultado = func(m, n);
    
    printf("Resultado da função: %i", resultado);
    return 0;
}
