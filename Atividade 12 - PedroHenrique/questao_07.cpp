#include <iostream>
#include <stdlib.h>
#include <stack>

using namespace std;

stack<int> fila;
stack<int> filaAux;

void inQueue(int n){
	if(fila.empty()){
		fila.push(n);
	}else{
		while(!(fila.empty())){
			filaAux.push(fila.top());
			fila.pop();
		}
		fila.push(n);
		while(!(filaAux.empty())){
			fila.push(filaAux.top());
			filaAux.pop();
		}
	}

}
int outQueue(){
	int retirado = fila.top();
	fila.pop();
	return retirado;
}

int main(){
	inQueue(1); //primeiro a entrar(1);
	inQueue(2);
	inQueue(3); 
	
	cout<<outQueue(); //primeiro a sair(1);
	
//	cout<<outQueue();
//	cout<<outQueue();
	return 0;
}
