#include <stdio.h>

int main(){
  // Definindo as variáveis
  char estado = 'A';
  char codigo[] = "A01";
  char nome_da_cidade[] = "São Paulo";
  int populacao = 12325000;
  float area = 1521.11;
  float BIP = 699.28;
  int num_pontos_turisticos = 50;

 printf("Desafio super trunfo \n");
 printf("novo commit \n");
 printf("Carta 1 \n");

 printf("digite o nome do estado:\n");
 scanf("%s", &estado);

 printf("digite o codigo:\n");
 scanf("%s", codigo);

 printf("digite a população:\n");
 scanf("%d",&populacao);

 printf("digite a area em Km²:\n");
 scanf("%f", &area);

 printf("digite o BIP:\n");
 scanf("%f", BIP);

 printf("quantos pontos turisticos?\n");
 scanf("%d", &num_pontos_turisticos);

 printf("Cidade: %s\n", nome_da_cidade);
 printf("Estado: %c\n", estado);
 printf("Código: %s\n", codigo);
 printf("População: %d\n", populacao);
 printf("Área: %.2f km²\n", area);
 printf("BIP (Produto Interno Bruto): %.2f bilhões\n", BIP);
 printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos);

  return 0;
  
}