#include <iostream>
#include <stdlib.h>
#include "pilha.h"
#include "fila.h"

using namespace std;

int main(){
	char expressao[50] = "(m < (n[8]+p)";
	Pilha *frontDels = new Pilha(); 
	Fila *backDels = new Fila();
	int i;
	
	//O primeiro for adiciona delimitadores de abertura na pilha; 
	char atual1 = expressao[0];
	for(i=0;atual1!=NULL;i++){
		atual1 = expressao[i];
		if(atual1=='('||atual1=='['||atual1=='{'){
			frontDels->push(atual1);
		}
	}
	
	//O segundo for adiciona delimitadores de fechamento na fila;
	char atual2 = expressao[0];
	for(i=0;atual2!=NULL;i++){
		atual2 = expressao[i];
		if(atual2==')'||atual2==']'||atual2=='}'){
			backDels->append(atual2);
		}
	}
	
	//Comparação do topo da pilha com o inicio da fila;
	while(frontDels->topo!=NULL && backDels->inicio!=NULL){
		if(frontDels->topo->nome == '(' && backDels->inicio->nome == ')'){
			frontDels->pop();
			backDels->pop();
			continue;
		}
		if(frontDels->topo->nome == '[' && backDels->inicio->nome == ']'){
			frontDels->pop();
			backDels->pop();
			continue;
		}
		if(frontDels->topo->nome == '{' && backDels->inicio->nome == '}'){
			frontDels->pop();
			backDels->pop();
			continue;
		}
		break; 
	}
	
	//Resposta;
	frontDels->isEmpty() == 0 && backDels->isEmpty() == true ?
	 cout<<"Elementos agrupados corretamente"<<endl : cout<<"Elementos agrupados incorretamente"<<endl;

	return 0;
}
