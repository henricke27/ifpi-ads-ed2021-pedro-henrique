#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

using namespace std;

Pilha *fila = new Pilha(); 
Pilha *filaAux = new Pilha(); 
	
void ordenar(){ 
	while(filaAux->topo!=NULL){
		char n = filaAux->pop();
		fila->push(n);
	}	
}
	
void inQueue(char n){ //entrar na fila
	filaAux->push(n);
}

char outQueue(){ //sair da fila
	if(fila->isEmpty() == 0){
		ordenar();
	}
	return fila->pop();
}

int main(){
	string sequencia = "lasanha";
	
	char atual = sequencia[0]; 
	for(int i=1; atual!=NULL; i++){ //enfileirando os caracteres da string;
		inQueue(atual); //first in
		atual = sequencia[i];
	}
	
	for(int i=0; i<sequencia.length(); i++){ 
		cout<<outQueue()<<endl; //first out
	}
	
	return 0;
}
