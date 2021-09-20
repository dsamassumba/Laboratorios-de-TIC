#include <stdio.h>
  int main(int argc, char** argv)
  {
	  float custo,preco,q;
	  printf("Informe o custo do espectaculo\n");
	  scanf("%f",&custo);
	   printf("Informe o preço\n");
	  scanf("%f",&preco);
	  q=custo/preco;
	  printf("Quantidade e %f",q);
	  return 0;
  }