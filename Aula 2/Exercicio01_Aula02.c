#include <stdio.h>

int main(void) {
  char caracter;
  unsigned char uns_char;
  signed char sig_char;
  int i;
  unsigned int un_i;
  signed int sig_i;
  short int sh_i;
  unsigned short int usi;
  signed short int ssi;
  long int li;
  signed long int sli;
  unsigned long int uli;
  float fl;
  double db;
  long double ldb;

  printf("Escreva uma Variável Char:\n");
  scanf("%c", &caracter);

  printf("\nEscreva uma Variável Unsigned Char:\n");
  scanf(" %c", &uns_char);

  printf("\nEscreva uma Variável Signed Char:\n");
  scanf(" %c", &sig_char);

  printf("\nEscreva uma Variável Int:\n");
  scanf("%d", &i);

  printf("\nEscreva uma Variável Unsigned Int:\n");
  scanf("%u", &un_i);

  printf("\nEscreva uma Variável Signed Int:\n");
  scanf("%d", &sig_i);

  printf("\nEscreva uma Variável Short Int:\n");
  scanf("%hi", &sh_i);

  printf("\nEscreva um número Unsigned Short Int:\n");
  scanf("%hu", &usi);

  printf("\nEscreva um número Signed Short Int:\n");
  scanf("%hi", &ssi);

  printf("\nEscreva um número Long Int:\n");
  scanf("%li", &li);

  printf("\nEscreva um número Signed Long Int:\n");
  scanf("%li", &sli);

  printf("\nEscreva um número Unsigned Long Int:\n");
  scanf("%lu", &uli);

  printf("\nEscreva um número Float:\n");
  scanf("%f", &fl);

  printf("\nEscreva um número Double:\n");
  scanf("%lf", &db);

  printf("\nEscreva um número Long Double:\n");
  scanf("%Lf", &ldb);

  printf("\nEssa variável é um Char: %c\n", caracter);

  printf("Essa variável é um Unsigned Char: %c\n", uns_char);

  printf("Essa variável é um Signed Char: %c\n", sig_char);

  printf("Essa variável é um Int: %d\n", i);

  printf("Essa variável é um Unsigned Int: %u\n", un_i);

  printf("Essa variável é um Signed Int: %d\n", sig_i);

  printf("Essa variável é um Short Int: %hi\n", sh_i);

  printf("Essa variável é um Unsigned Short Int: %hu\n", usi);

  printf("Essa variável é um Signed Short Int: %hi\n", ssi);

  printf("Essa variável é um Long Int: %li\n", li);

  printf("Essa variável é um Signed Long Int: %li\n", sli);

  printf("Essa variável é um Unsigned Long Int: %lu\n", uli);

  printf("Essa variável é um Float: %f\n", fl);

  printf("Essa variável é um Double: %lf\n", db);

  printf("Essa variavel é um Long Double: %l.f", ldb);

  
}
