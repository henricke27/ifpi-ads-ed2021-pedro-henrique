#include <iostream>
#include <stdlib.h>
#include <queue>

using namespace std;

queue<int> pilha;
queue<int> pilhaAux;

void inStack(int n){
	if(pilha.empty()){
		pilha.push(n);
	}else{
		while(!(pilha.empty())){
			pilhaAux.push(pilha.front());
			pilha.pop();
		}
		pilha.push(n);
		while(!(pilhaAux.empty())){
			pilha.push(pilhaAux.front());
			pilhaAux.pop();
		}
	}
}
int outStack(){
	int retirado = pilha.front();
	pilha.pop();
	return retirado;
}

int main(){
	inStack(1); 
	inStack(2);
	inStack(3); // Último a entrar(3);
	
	cout<<outStack(); // Primeiro a sair(3);
	
//	cout<<outStack();
//	cout<<outStack();
	return 0;
}
