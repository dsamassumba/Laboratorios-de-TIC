#include <stdio.h>
  int main(int argc, char** argv)
  {
	  float maior=1.50,menor=1.10;
	  int c;
	  do{
		  maior+=0.2;
		  menor+=0,3;
		  c++;
		  }while(menor>maior);  
  printf("%i",c);
	  return 0;
  }