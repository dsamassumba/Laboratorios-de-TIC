#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	int c;
	float altura,maior,menor;
	for(c=1;c<=15;c++){
	printf("Informeas a altura\n");
	scanf("%i",&altura);
		if(c==1){
			maior=altura;
			menor=altura;
		}
		if(maior<altura){
			maior=altura;
		}
		if(menor>altura){
		menor=altura;
		}
	}
 printf("Maior e %f",maior);
 printf("Menor e %f",menor);
	return 0;
}