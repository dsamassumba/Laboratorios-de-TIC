#include <stdio.h>
 int main(int argc, char** argv)
 {
	 float sm,htt,sb,i,sr,ht;
	 printf("Informe o valor de horas de trabalho\n");
	 scanf("%f",&ht);
	 printf("Informe o salario minimo\n");
	 scanf("%f",&sm);
	 htt=sm/2;
	 sb=htt*ht;
	 i=(sb*3)/100;
	 sr=sb-i;
	 printf("O salario bruto sera %f",sr);
	 return 0;
 }