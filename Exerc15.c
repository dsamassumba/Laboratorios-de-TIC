#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	int a,b;
do{
	printf("Informe o valor\n");
	scanf("%i",&a);
	b=a+1;
	printf("Sucessor %i\n",b);
}while(a>0);

	return 0;
}