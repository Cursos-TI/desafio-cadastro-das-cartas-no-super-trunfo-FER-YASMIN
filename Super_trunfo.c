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

 printf("digite o nome da cidade: \n");
 scanf("%s", nome_da_cidade);

 printf("digite a população: \n");
 scanf("%d",&populacao);

 printf("digite a area em Km²: \n");
 scanf("%f", &area);

 printf("digite o BIP: \n");
 scanf("%f", BIP);

 printf("quantos pontos turisticos? \n");
 scanf("%d", &num_pontos_turisticos);

 printf("Cidade: %s \n", nome_da_cidade);
 printf("Estado: %c \n", estado);
 printf("Código: %s \n", codigo);
 printf("População: %d \n", populacao);
 printf("Área: %.2f km² \n", area);
 printf("BIP (Produto Interno Bruto): %.2f bilhões \n", BIP);
 printf("Número de Pontos Turísticos: %d \n", num_pontos_turisticos);

  return 0;
  
}

#include <stdio.h>

 int main (){
 char estado = 'B';
 char codigo[] = "B02";
 char cidade = "Rio de Janeiro";
 int população = 6748000;
 float area = 1200.25;
 float PIB = 300.50;
 int num_pontos_turisticos = 30;

 printf("Carta 2 \n");

 printf("digite o nome do estado: \n");
 scanf("%s", &estado);

 printf("digite o codigo: \n");
 scanf("%s", codigo);

 printf("Digite a cidade: \n");
 scanf("%s", cidade); 

 printf("Digite a população: \n");
 scanf("%d", &população); 

 printf("Digite a área: \n");
 scanf("%f", &area); 

 printf("Digite o PIB: \n");
 scanf("%f", &PIB);

 printf("quantos pontos turísticos? \n");
 scanf("%d", &num_pontos_turisticos);  

 printf("Estado: %c\n", estado);
 printf("Código: %s\n", codigo);
 printf("Cidade: %s\n", cidade);
 printf("População: %d \n", população);
 printf("Área: %.2f km²\n", area);
 printf("PIB: %.2f bilhões de reais\n", PIB);
 printf("Número de pontos turísticos: %d\n", num_pontos_turisticos);

  return 0;

 }