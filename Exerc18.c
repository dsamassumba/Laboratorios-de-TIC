#include <stdio.h>
#include <math.h>
 int main(int argc, char** argv)
 {
	 int c,nd,d;
	 char nome;
	 float h,soma;
	 for(c=1;c<=30;c++) {
		 printf("Informe o seu nome\n");
		 scanf("%s",&nome);
		  printf("Informe o numero de dias\n");
		 scanf("%i",&nd);
		 d=nd*50;
		 if(nd<15){
			 h=d+4;
		 }
		 if(nd==15){
			 h=d+3.60;
		 }
		 if(d>nd){
			 h=d+3;
		 }
		 soma+=h;
		 printf("O valor a ser pago %f\n",h);
		  printf("O Nome do cliente %c\n",nome);
	 }
	 printf("Soma total e %f",soma);
	 return 0;
 }