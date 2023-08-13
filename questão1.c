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
        	count = 0;
    	}
    }
    
 return(0);
}
