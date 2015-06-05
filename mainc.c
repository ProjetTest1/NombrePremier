#include "prime.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc , char** argv){
	int a;
	if( argc != 1 )
		a = atoi(argv[1]);
	else{
		printf("Saisir un nombre ");
		scanf("%d",&a);
	}
	if( isPrime(a) ) {
		printf("%d est premier\n",a);
	}
	else{
		printf("%d n'est pas premier\n",a);
	}

	return 0;

}
