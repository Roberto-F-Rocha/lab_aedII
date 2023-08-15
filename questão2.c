#include <stdio.h>

/*
2. Defina uma funcao chamada diasDeAula que calcula quantas aulas de laboratorio temos dado
como entrada: Dia de hoje(dia,mes,ano) e Ultimo dia do Semestre(dia,mes,ano). 
*/

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;
/*
  Define uma estrutura chamada 'Data' que contém três inteiros: dia, mês e ano.
  Essa estrutura será usada para armazenar datas.
*/

int dias_Aulas(Data dia_Hoje, Data ultimo_Dia_Semestre) { 	 // Função que calcula a quantidade de aulas de laboratório.
    int dias_Totais, semanas;	 // Declaração de variáveis para armazenar o total de dias e semanas.
    dias_Totais = (ultimo_Dia_Semestre.ano - dia_Hoje.ano) * 365; 	// Calcula o total de dias considerando os anos.
    dias_Totais += (ultimo_Dia_Semestre.mes - dia_Hoje.mes) * 30; 	// Adiciona dias baseados nos meses.
    dias_Totais += (ultimo_Dia_Semestre.dia - dia_Hoje.dia); 	// Adiciona os dias restantes.
    semanas = dias_Totais / 7;	 // Calcula o total de semanas dividindo os dias totais por 7.
    return semanas;
}

int main() {
    Data dia_Hoje;
    Data ultimo_Dia_Semestre = {29, 10, 2023};
    // Declaração de variáveis do tipo Data para armazenar a data de hoje e a data do último dia do semestre.

    printf("informe o dia: ");
    scanf("%i", &dia_Hoje.dia);

    printf("informe o mes: ");
    scanf("%i", &dia_Hoje.mes);

    printf("informe o ano: ");
    scanf("%i", &dia_Hoje.ano);
    

    int aulas_Dadas = dias_Aulas(dia_Hoje, ultimo_Dia_Semestre);
    // Chama a função dias_Aulas para calcular a quantidade de aulas.

    printf("O total de aulas a serem ministradas na disciplina de laboratorio e: %d\n", aulas_Dadas);
    // Imprime o número total de aulas de laboratório.

    return 0;
 }
