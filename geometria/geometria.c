#include <stdio.h>
#include "geometria.h"

int main(void) {

  double medida;

  printf("O valor digitado serve tanto para a medida do raio do círculo quanto para o lado de um quadrado. \n");
  printf("Digite o valor: \n");
  scanf("%lf",&medida);
  
  
  printf("\n->Sobre o círculo\n");
  printf("Medida da circunferência: %.2f\n", circunferencia(medida));
  printf("Área: %.2f\n", area_circulo(medida));

  printf("\n->Sobre o quadrado\n");
  printf("Perímetro: %.2f\n", perimetro_quadrado(medida));
  printf("Área: %.2f\n", area_quadrado(medida));
  printf("Medida da diagonal: %.2f\n", diagonal_quadrado(medida));
  
  return 0;

  
}