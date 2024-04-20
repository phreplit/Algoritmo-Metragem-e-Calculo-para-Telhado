
//  Author: PHNO - Tecnólogo | Pós-Graduado
//  Data Release: 04/04/2024
//  Versão Código: 1.0.1v
//  Replit: @PHNO, @PHREPLIT
//  E-mail: phreplit@gmail.com

// Algoritmo: Metragem e Calculo para Telhado Residencial, com menu e compilacao em console.

#include <stdio.h> // importa lib
#include <stdlib.h> 
#include <math.h> 

int menu(); 
void op_telhado(); // cabecalho
void op_telha2(); 
void op_telha3();
void op_telha4();
void op_telha5();
void op_telha6();
void info();
int menu_developer();

int menu() { // Funcao Menu  
int op, c;

printf("\n\t Metragem e Calculo para Telhado \n");

printf("\n");
printf("\n\t     Menu    \n");
printf("\n");

printf("\n1 - Calcular Metro Quadrado do Telhado");
printf("\n2 - Calcular Qtd. de telhas americanas por M. Quad.");
printf("\n3 - Calcular Qtd. de telhas coloniais por M. Quad.");
printf("\n4 - Calcular Qtd. de telhas italianas por M. Quad.");
printf("\n5 - Calcular Qtd. de telhas portuguesas por M. Quad.");
printf("\n6 - Calcular Qtd. de telhas romanas por M. Quad.");
printf("\n7 - Sair\n");
printf("\n[8] Info\n");
printf("\n[9] Sobre\n");

printf("\nDigite sua escolha: ");
scanf("%d", &op);

while ((c = getchar()) != '\n' && c != EOF) {
} // limpar o buffer do teclado.   
return op; 
}

int main() { // Funcao principal

int op = 0, c;

while (op != -1) { 
op = menu(); 
switch (op) { 
case 1: 
op_telhado(); // funcao 
break; 
case 2: 
op_telha2(); // funcao 
break; 
case 3: 
op_telha3(); // funcao 
break;
case 4:
op_telha4(); // funcao
break;
case 5:
op_telha5(); // funcao
break;
case 6:
op_telha6(); // funcao
break;
case 7:
printf("\n");
printf("\n Algoritmo Finalizado! \n"); // Ao Sair
printf("\n");
return 0;
break;
case 8:
info(); // funcao
break;
case 9:
menu_developer(); // funcao
break; 
default: 
printf("\n");
printf("Erro. Opcao Invalida!\n");
printf("\n");
//printf("\n");
printf("\nTeclar enter para retornar ao menu...\n");
getchar();
scanf("c\n");
system("clear");      // linux limpar tela
system("tput reset"); // linux limpar texto
} 
} 
return 0; 
} 

void op_telhado() { 
int v1;
int v2;
int resultado;
printf("\n");
printf("\nDigite o comprimento do telhado: ");
scanf("%d", &v1, stdin);
printf("\n");
printf("\nDigite a largura do telhado: ");
scanf("%d", &v2, stdin);
resultado = v1 * v2;
printf("\nOs metros quadrados equivalem a: %d metros quadrados.\n", resultado);
// system("pause"); // pausa tela windows
// system("Cls"); // limpa tela windows
// printf("\n"); // pula linha
printf("\nTeclar enter para retornar ao menu...\n");
getchar();
scanf("c\n");
system("clear");      // linux limpar tela
system("tput reset"); // linux limpar texto
return; 
}

void op_telha2() { 
int v1; // metros quadrados
int v2 = 12; // qtd telha por m. quad.
int resultado; 
printf("\n");
printf("\nDigite quantos metros quadrados tem o telhado: ");
scanf("%d", &v1, stdin);
printf("\n");
resultado = (v1 * v2);
printf("\nA quantidade de telhas americanas será de %d telha(s).\n", resultado);
// system("pause"); // pausa tela windows
// system("Cls"); // limpa tela windows
// printf("\n"); // pula linha
printf("\nTeclar enter para retornar ao menu...\n");
getchar();
scanf("c\n");
system("clear");      // linux limpar tela
system("tput reset"); // linux limpar texto
return; 
}

void op_telha3() {
int v1; // metros quadrados
int v2 = 16; // qtd telha por m. quad.
int resultado; 
printf("\n");
printf("\nDigite quantos metros quadrados tem o telhado: ");
scanf("%d", &v1, stdin);
printf("\n");
resultado = (v1 * v2);
printf("\nA quantidade de telhas coloniais será de %d telha(s).\n", resultado);
// system("pause"); // pausa tela windows
// system("Cls"); // limpa tela windows
// printf("\n"); // pula linha
printf("\nTeclar enter para retornar ao menu...\n");
getchar();
scanf("c\n");
system("clear");      // linux limpar tela
system("tput reset"); // linux limpar texto
return; 
}

void op_telha4() {
int v1; // metros quadrados
int v2 = 14; // qtd telha por m. quad.
int resultado; 
printf("\n");
printf("\nDigite quantos metros quadrados tem o telhado: ");
scanf("%d", &v1, stdin);
printf("\n");
resultado = (v1 * v2);
printf("\nA quantidade de telhas italianas será de %d telha(s).\n", resultado);
// system("pause"); // pausa tela windows
// system("Cls"); // limpa tela windows
// printf("\n"); // pula linha
printf("\nTeclar enter para retornar ao menu...\n");
getchar();
scanf("c\n");
system("clear");      // linux limpar tela
system("tput reset"); // linux limpar texto
return; 
}

void op_telha5() {
int v1; // metros quadrados
int v2 = 17; // qtd telha por m. quad.
int resultado; 
printf("\n");
printf("\nDigite quantos metros quadrados tem o telhado: ");
scanf("%d", &v1, stdin);
printf("\n");
resultado = (v1 * v2);
printf("\nA quantidade de telhas portuguesas será de %d telha(s).\n", resultado);
// system("pause"); // pausa tela windows
// system("Cls"); // limpa tela windows
// printf("\n"); // pula linha
printf("\nTeclar enter para retornar ao menu...\n");
getchar();
scanf("c\n");
system("clear");      // linux limpar tela
system("tput reset"); // linux limpar texto
return; 
}

void op_telha6() {
int v1; // metros quadrados
int v2 = 16; // qtd telha por m. quad.
int resultado; 
printf("\n");
printf("\nDigite quantos metros quadrados tem o telhado: ");
scanf("%d", &v1, stdin);
printf("\n");
resultado = (v1 * v2);
printf("\nA quantidade de telhas romanas será de %d telha(s).\n", resultado);
// system("pause"); // pausa tela windows
// system("Cls"); // limpa tela windows
// printf("\n"); // pula linha
printf("\nTeclar enter para retornar ao menu...\n");
getchar();
scanf("c\n");
system("clear");      // linux limpar tela
system("tput reset"); // linux limpar texto
return; 
}

void info() {
system("clear");      // linux
system("tput reset"); // linux
printf("\nInfo\n");
printf("\nEste algoritmo foi desenvolvido com variaveis inteiras entao nao aceita numeros com virgula ex: 2,90 metros mude para 3 metros.\n");
printf("\nPara calcular o metro quadrado do telhado utilizamos Comprimento x Largura.\n");
printf("\nPara calcular a Quantidade de Telhas por Metro Quadrado: Tendo como base uma telha americana com dimensoes (43cx26l) em centimetros em vista de eixo horizontal,");
printf(" e sabendo que calcular um metro quadrado de um telhado sera C x L entao 1 MQ = 12 telhas, assim um metro quadrado tem 12 telhas entao essa sera a medida padrao. 12 x tantos metros quadrados = a quantidade de telhas por metro quadrado.\n");
printf("\nPara calcular a Telha Colonial: 1 MQ = 16 telhas.\n");
printf("\nPara calcular a Telha Italiana: 1 MQ = 14 telhas.\n");
printf("\nPara calcular a Telha Portuguesa: 1 MQ = 17 telhas.\n");
printf("\nPara calcular a Telha Romana: Com base em uma telha romana com dimensoes (40cx21l) em centimetros em vista de eixo horizontal, e sabendo que calcular um metro quadrado de um telhado sera C x L entao 1 MQ = 16 telhas,");
printf(" assim um metro quadrado tem 16 telhas entao essa sera a medida padrao. 16 x tantos metros quadrados = a quantidade de telhas por metro quadrado.\n");
printf("\n Teclar enter para retornar ao menu...\n ");
getchar();
scanf("c\n");
system("clear");      // linux
system("tput reset"); // linux
return;
}

int menu_developer(){
  system("clear");      // linux limpar tela
  system("tput reset"); // linux limpar texto
  printf("\n Algoritmo: Metragem e Calculo para Telhado \n");
  printf("\n Author: PHNO ");
  printf("\n Data Release: 04/04/2024 ");
  printf("\n Versao Codigo: 1.0.1v");
  printf("\n Replit: @PHNO, @PHREPLIT");
  printf("\n E-mail: phreplit@gmail.com \n");
  printf("\n Teclar enter para retornar ao menu...\n ");
  getchar();
  scanf("c\n");
  system("clear");      // linux limpar tela
  system("tput reset"); // linux limpar texto
  return 0;
}




