#include <stdio.h>

int func(int m, int n){
	if(n == 1){
		return(m + 1);
	}
	else if(m == 1){
		return(n + 1);
	}
	else{
		return func(m, n - 1) + func(m - 1, n);
	}
}

int main(){
	int n, m;
	printf("insira dois valores \n");
	scanf("%i", &n); 
 	scanf("%i", &m); 
 	
 	int resultado = func(m,n);
 	printf("resultado da func %i", resultado);
 return(0);	
}