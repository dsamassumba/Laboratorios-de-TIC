#include <stdio.h>
  int main(int argc, char** argv)
  {
	  float qd,peso,kg,c;
	  int q;
	  printf("INforme o peso do saco\n");
	  scanf("%f",&peso);
	  printf("Informe a quantidade diaria\n");
	  scanf("%i",&q);
	  qd=q*2*5;
	  kg=qd*0.001;
	  c=peso-kg;
	  printf("restará %f",c);
	  return 0;
  }