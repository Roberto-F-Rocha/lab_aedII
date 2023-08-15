//Escreva um programa para converter e imprimir os caracteres para os valores ASCII de 0 a 127.
//O programa deve imprimir 10 caracteres por linha.

#include <stdio.h>

int main(){
    char c; 
    int i, count = 0;
    
    for(i = 0; i < 127; i++){
    	c = i;   
    	printf(" %c", c);
    	count++;
    	if(count == 10){
        	printf("\n");
        	count = 0; //reseta o valor de 'count' para 0, para começar a contar novamente.
    	}
    }
    
 return(0);
}
