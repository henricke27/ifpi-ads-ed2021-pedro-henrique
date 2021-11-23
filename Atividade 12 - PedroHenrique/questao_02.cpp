#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

using namespace std;

int main(){
	string x; 
	string y;
	
	cout<<"String x: ";
	cin>>x;
	cout<<"String y: ";
	cin>>y;
	
	Pilha *caracteres = new Pilha();
	
	char atual1 = x[0];
	for(int i=1; atual1!=NULL; i++){ //Adiciona os caracteres da string x na pilha;
		caracteres->push(atual1);
		atual1 = x[i];
	} 
	
	int condicao = 0; // 0 - inverso; 1 - não é inverso;
	if(x.length() == y.length()){ //Compara primeiramente o tamanho das strings;
		char atual2 = y[0];
		for(int i=1; atual2!=NULL && condicao==0; i++){ //Compara o topo da pilha com os caracteres da string y;
			if(caracteres->topo->nome != atual2){
				condicao = 1;
			}
			caracteres->pop();
			atual2 = y[i];
		} 
	}else{
		condicao = 1;
	}
	
	//Resposta;
	condicao == 0 ? cout<<"Inverso"<<endl : cout<<"Nao inverso"<<endl;
	
	return 0;
}
