#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	int n,a,b,c,d,e,f;
	printf("Informe um valor com 5 digitos\n");
	scanf("%i",&n);
	a=n/10000;
	n=n%1000;
	b=n/100;
	n=n%100;
	c=n/10;
	n=n%10;
	d=n/10;
	n=n%10;
	f=n;
	printf("%i%i%i%i%i",f,d,c,b,a);
	return 0;
}