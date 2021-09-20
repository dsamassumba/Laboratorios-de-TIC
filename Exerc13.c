#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	int c,a,soma=0;
	for(c=1;c<=500;c++){
	printf("Informe um valor\n");
	scanf("%i",&a);
	if(a%2!=0&&a%3==0){
		soma+=a;}
		
	}
	printf("soma %i\n",soma);

	return 0;
}