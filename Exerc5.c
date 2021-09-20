#include <stdio.h>
   int main(int argc, char** argv)
   {
	    float sal,d,a,p;
	   printf("Informe o seu salario\n");
	   scanf("%f",&sal);
	   printf("Infome a percentual do aumento\n");
	   scanf("%f",&p);
	  d=(sal*p)/100;
	  a=sal+d;         
	   printf("%f",a);
	   return 0;
   }