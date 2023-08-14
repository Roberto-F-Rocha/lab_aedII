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