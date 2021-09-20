#include <stdio.h>
#include<math.h>
 int main(int argc, char** argv)
 {
	 int a,b,c;
	 float d;
	 double x1,x2;
	 printf("a: ");
    scanf("%i",&a);
      printf("b: ");
    scanf("%i",&b);
    printf("c: ");
    scanf("%i",&c); 
    d=pow(b, 2)-4*a*c;
    printf("Delta: %f\n",d);
    if(d>0){
		x1=(-b+sqrt(d))/2*a;
		x2=(-b-sqrt(d))/2*a;
		printf("X1=%f\n",x1);
			printf("X2=%f\n",x2);
			}else
			{
							printf("delta e negativo\n");
			}
	 return 0;
 }