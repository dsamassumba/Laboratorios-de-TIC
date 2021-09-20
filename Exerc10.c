#include <stdio.h>
 int main(int argc, char** argv)
 {
	 float sm,qw,m,s,h,y;
	 printf("Salario minimo\n");
	 scanf("%f",&sm);
	 printf("A quantidade de kilowatts\n");
	 scanf("%f",&qw);
	 m=sm/5;
	 s=m*qw;
	 h=(s*15)/100;
	 y=s-h;
	 printf("Valor de cada kilowaats e %f\n",m);
	 printf(" O valor a ser pago %f\n",s);
	 printf("disconto %f\n",y);
	 return 0;
 }