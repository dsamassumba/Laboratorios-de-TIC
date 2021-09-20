  #include <stdio.h>
  #include<stdlib.h>
  #include<math.h>
  int main(int argc, char** argv)
  {
	  float pr,pl,pi,dl,di,pf;
	  printf("Informe o preço de fabrica\n");
	  scanf("%f",&pr);
	   printf("Informe a percentual do lucro do distribuidor\n");
	  scanf("%f",&pl);
	printf("Informepercentual do imposto\n");
	scanf("%f",&pi);
	dl=(pr*pl)/100;
	di=(pr*pi)/100;
	pf=pr+dl+di;
	printf("Lucro do distribuidor e %f\n",dl);
	printf("O imposto %f\n",di);
	printf("preço final e %f",pf);
	  return 0;
  }