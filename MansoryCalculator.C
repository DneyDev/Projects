#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  float mao_obra_pedreiro, mao_obra_servente,
  qnt_tijolo_minima = 22, 
  qnt_areia_minima = 18, 
  qnt_cimento_minima = 3;
  char equipamento[10] = "Betoneira", enter;
  float area; //(É em metro quadrado)
  
  printf("Calculadora Civil - V1.0");
  printf("\nAperte enter para continuar: ");
  
  scanf("%c", &enter);

  system("clear"); //Limpa o console

  //A seguir vai ser a entrada de dados:
  
  printf("Informe o tamanho da área de alvenaria: "); 
  scanf("%f", &area);

  printf("Informe o número de pedreiros: ");
  scanf("%f", &mao_obra_pedreiro);

  printf("Informe o número de serventes: ");
  scanf("%f", &mao_obra_servente);

  // Cálculo das horas dos funcionários:
  
    float horas_trabalhadas_pedreiro = 0.1 , horas_trabalhadas_servente = 0.1;
    float hora_resultado_pedreiro = horas_trabalhadas_pedreiro * area;
    float hora_resultado_servente = horas_trabalhadas_servente * area;

  //Cálculo dos materiais e resultados no final:

  float qnt_tijolo_utilizar = area * qnt_tijolo_minima;
  float qnt_areia_utilizar = area * qnt_areia_minima;
  float qnt_cimento_utilizar = area * qnt_cimento_minima;

  printf("\n");

  system("clear");
  
  printf("--------------------");
  printf("\nA quantidade de materiais vai ser: ");
    printf("\n"); 
      printf("\nTijolos: "); printf("%f", qnt_tijolo_utilizar); printf(" Unidades");
        printf("\nAreia: "); printf("%f", qnt_areia_utilizar ); printf(" Litros");
          printf("\nCimento: "); printf("%f", qnt_cimento_utilizar); printf(" Litros");

  //Resultado das horas dos funcionários:

  printf("\n");
  
  printf("\nAs horas totais trabalhadas pelos funcionários foram: ");
    printf("\n\nPedreiros: "); printf("%f", hora_resultado_pedreiro); printf(" Horas");
      printf("\nServentes: "); printf("%f", hora_resultado_servente); printf(" Horas");
        printf("\n--------------------");
}
