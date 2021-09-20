#include <stdio.h>
 int main(int argc, char** argv)
 {
	 int a=0,b=1,c,r;
printf("%i%i",a,b);	 
for(c=1;c<=20;c++){
	r=a+b;
	printf("%i",r);
	a=b;
	b=r;
}
	 return 0;
 }