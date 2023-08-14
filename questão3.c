// Um triˆangulo retˆangulo pode ter lados inteiros. O conjunto do comprimento de trˆes valores
// inteiros para os lados de um triˆangulo retˆangulo ´e chamado de triplo pitag´orico. Esses trˆes lados
// devem satisfazer a rela¸c˜ao de que a soma dos quadrados de dois dos lados ´e igual ao quadrado da
// hipotenusa. Encontre todos os triplos pitag´oricos para cateto1, cateto2 e a hipotenusa, todos com
// at´e o valor de, indicado como parˆametro.

#include <stdio.h>


int triplopitagorico(int a, int b, int c){
 return (a * a + b * b) == c * c;
}

int main(){
    int limite, hipotenusa, cateto1, cateto2;

    printf("Digite o valor limite para encontrar os triplos pitagoricos: ");
    scanf("%d", &limite);

    printf("Triplos pitagoricos:\n");

    for(hipotenusa = 1; hipotenusa <= limite; hipotenusa++){
    	printf("hipotenusa: %i\n cateto1: %i\n, cateto2: %i\n", hipotenusa, cateto1, cateto2);
    	
        for(cateto1 = 1; cateto1 < hipotenusa; cateto1++){
        	printf("hipotenusa: %i\n cateto1: %i\n, cateto2: %i\n", hipotenusa, cateto1, cateto2);
        	
            for(cateto2 = cateto1 + 1; cateto2 < hipotenusa; cateto2++){
            	printf("hipotenusa: %i\n cateto1: %i\n, cateto2: %i\n", hipotenusa, cateto1, cateto2);
            	
                if(triplopitagorico(cateto1, cateto2, hipotenusa)){	
                    printf("(%d, %d, %d)\n", cateto1, cateto2, hipotenusa);
                }
            }
        }
    }

 return(0);
}