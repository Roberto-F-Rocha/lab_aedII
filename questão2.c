//Defina uma fun¸c˜ao chamada diasDeAula que calcula quantas aulas de laborat´orio temos dado
//como entrada: Dia de hoje(dia,mˆes,ano) e Ultimo dia do Semestre(dia,mˆes,ano).

#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

int dias_Aulas(Data dia_Hoje, Data ultimo_Dia_Semestre){

    int dias_Totais, semanas;
	
	dias_Totais = (ultimo_Dia_Semestre.ano - dia_Hoje.ano) * 365;
	dias_Totais += (ultimo_Dia_Semestre.mes - dia_Hoje.mes) * 30;
	dias_Totais += (ultimo_Dia_Semestre.dia - dia_Hoje.dia);
	semanas = dias_Totais / 7;

 return semanas;
}

int main(){

    Data dia_Hoje;
    Data ultimo_Dia_Semestre = {29, 10, 2023};
    
    printf("informe o dia: ");    
    scanf("%i", &dia_Hoje.dia);
    
    printf("informe o mes: ");    
    scanf("%i", &dia_Hoje.mes);
    
    printf("informe o ano: ");    
    scanf("%i", &dia_Hoje.ano);
    
    int aulas_Dadas = dias_Aulas(dia_Hoje, ultimo_Dia_Semestre);

    printf("O total de aulas a serem ministradas na disciplina de laboratorio e: %d\n", aulas_Dadas);

 return(0);
}