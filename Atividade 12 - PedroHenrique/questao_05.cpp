#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

using namespace std;

Fila *pilha = new Fila(); 
Fila *pilhaAux = new Fila(); 

void ordenar(char m){ 
	while(pilha->inicio!=NULL){
		char x = pilha->pop();
		pilhaAux->append(x);
	}
	pilha->append(m);
	while(pilhaAux->inicio!=NULL){
		char y = pilhaAux->pop();
		pilha->append(y);
	}
}
	
void inStack(char n){ //entrar na pilha
	if(pilha->isEmpty() == true){
		pilha->append(n);
	}else{
		ordenar(n);	
	}
}

char outStack(){ //sair da pilha
	return pilha->pop();
}

int main(){
	inStack('a'); 
	inStack('b');
	inStack('c'); 
	inStack('d'); //last in;
	
	while(!(pilha->isEmpty())){ 
		cout<<outStack()<<endl; // first out;
	} 
	
	return 0;
}
