#include <stdio.h>
 int main(int argc, char** argv)
 {
	 int anoactual,anon,i,a;
	   printf("Informe  o ano actual\n");
	   scanf("%i",&anoactual);
	     printf("Informe de nascemento\n");
	   scanf("%i",&anon);
	   i=anoactual-anon;
	   printf("A sua idade e %i\n",i);
	   a=i+50;
	   printf("Em 2050 teras %i\n",a);
	 return 0;
 }