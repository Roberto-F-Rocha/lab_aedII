// Um n´umero inteiro ´e considerado um n´umero perfeito se seus fatores, incluindo 1 (mas n˜ao o
// pr´oprio n´umero), somam o n´umero. Por exemplo, 6 ´e um n´umero perfeito porque 6 = 1 + 2 + 3.
// Escreva uma fun¸c˜ao isPerfect que determina se o n´umero do parˆametro ´e um n´umero perfeito. Use
// esta fun¸c˜ao em um programa que determina e imprime todos os n´umeros perfeitos entre 1 e 1000.
// Imprima os fatores de cada n´umero perfeito para confirmar que o n´umero ´e realmente perfeito.

#include <stdio.h>
#include <stdlib.h>

int isPerfect(int n){
    int soma = 0, i;
    
    for (i = 1; i < n; i++){
        if(n % i == 0){
            soma += i;
        }
    }

    if(soma == n){
		return soma;
    } 
}

int main(){
	int n, r;

	printf("\nInsira um número: ");
	scanf("%i", &n);

	r = isPerfect(n);

	if(r == n){
 		printf("\n%i é um número perfeito", n);
	}
	else{
     	 printf("\n%i não é um número perfeito", n);
	}
 return(0);
}