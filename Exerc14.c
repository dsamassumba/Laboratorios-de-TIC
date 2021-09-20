#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	int a,c,sp,si;
	float mp,mi;
	for (c=1;c<=10;c++){
	printf("Informe um valor\n");
	scanf("%i",&a);
	if(a%2==0){
		sp+=a;
		
	}else
	{
		si+=a;
	}
	}
	mi=si/10;
	mp=sp/10;
	printf("A media dos pares %f\n",mp);
		printf("A media dos Impares %f\n",mi);
	return 0;
}