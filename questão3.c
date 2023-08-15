#include <stdio.h> 

/*
3. Um triangulo retangulo pode ter lados inteiros. O conjunto do comprimento de tres valores
inteiros para os lados de um triangulo retangulo e chamado de triplo pitagorico. Esses tres lados
devem satisfazer a relacao de que a soma dos quadrados de dois dos lados e igual ao quadrado da
hipotenusa. Encontre todos os triplos pitagoricos para cateto1, cateto2 e a hipotenusa, todos com
ate o valor de, indicado como parametro.
*/

int triplopitagorico(int a, int b, int c) {
// Verifica se a soma dos quadrados de 'a' e 'b' é igual ao quadrado de 'c'.
    return (a * a + b * b) == c * c;
}

// Função principal do programa.
int main() {
int limite, hipotenusa, cateto1, cateto2;

    printf("Digite o valor limite para encontrar os triplos pitagoricos: ");
    scanf("%d", &limite);

   
    printf("Triplos pitagoricos:\n");

    // Loop para variar o valor da hipotenusa de 1 até o valor limite.
    for(hipotenusa = 1; hipotenusa <= limite; hipotenusa++){
        // Loop para variar o valor do cateto1 de 1 até a hipotenusa.
        printf("hipotenusa %i\ncateto1 %i\ncateto2 %i\n\n", hipotenusa, cateto1, cateto2);
        
        for(cateto1 = 1; cateto1 < hipotenusa; cateto1++){
        // Loop para variar o valor do cateto2 de cateto1 + 1 até a hipotenusa.
        	printf("hipotenusa %i\ncateto1 %i\ncateto2 %i\n\n", hipotenusa, cateto1, cateto2);
        	
            for(cateto2 = cateto1 + 1; cateto2 < hipotenusa; cateto2++){
            // Chama a função 'triplopitagorico' para verificar se os valores formam um triplo pitagórico.
            	printf("hipotenusa %i\ncateto1 %i\ncateto2 %i\n\n", hipotenusa, cateto1, cateto2);
            	
                if(triplopitagorico(cateto1, cateto2, hipotenusa)){
                // Se forem um triplo pitagórico, imprime os valores correspondentes.
                    printf("\n(%d, %d, %d)\n\n", cateto1, cateto2, hipotenusa);
                }
            }
        }
    }

 return 0;
}
