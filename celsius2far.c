#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Função de realização do cálculo*/
float convert(float temp_C);

int main()
{

  setlocale(LC_ALL, "");
  /*Declaração das variáveis*/
  float v1, resp;
  //Início
  printf("Informe o valor da temperatura em Celsius: ");
  scanf("%f", &v1);
  fflush(stdin);
  resp = convert(v1);
  printf("\nO valor da temperatura em Farenheint é: %.2fº\n\n", resp);

  system("PAUSE");
  return (0);
}

float convert(float temp_C)
{
  float result;
  result = 1.8 * temp_C + 32;
  return (result);
}
