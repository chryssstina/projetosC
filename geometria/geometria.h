#ifndef GEOMETRIA_H
#define GEOMETRIA_H
#include <math.h>

double PI=3.1415;

double circunferencia(double medida){
  double circunferencia = 2*PI*medida;
  return circunferencia;
}

double area_circulo(double medida){
  double area_c = PI*medida*medida;
  return area_c;
}

double perimetro_quadrado(double medida){
  double perimetro_q = medida*4;
  return perimetro_q;
}

double area_quadrado(double medida){
  double area_q = medida*medida;
  return area_q;
}

double diagonal_quadrado(double medida){
  double diagonal_q = medida*sqrt(2);
  return diagonal_q;
}

#endif