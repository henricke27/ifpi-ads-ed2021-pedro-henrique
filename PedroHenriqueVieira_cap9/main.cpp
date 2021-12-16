#include <stdio.h>
#include <stdlib.h>
#include "lista.h" // 9.1

using namespace std;

int main(){
	Lista n = inclue(3,inclue(1,inclue(7, NULL)));
	Lista m = inclue(3,inclue(2,inclue(8, NULL)));
	
	//exibe(n); 

	//anexa(n, m);
	
	//destroi(n);
	
	printf("Ocorrencias: %d \n\n", ocorrencias(3, n)); // 9.2
	
	printf("Ultimo item: %d \n\n", ultimo(n)); // 9.3
	
	printf("Lista Inversa: \n");
	exibe(inversa(n)); // 9.4
	
	return 0;	
}

