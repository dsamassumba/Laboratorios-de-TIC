#include <stdio.h>
   int main(int argc, char** argv)
   {
	    float sal,d,a;
	   printf("Informe o seu salario\n");
	   scanf("%f",&sal);
	  d=(sal*25)/100;
	  a=sal+d;         
	   printf("%f",a);
	   return 0;
   }