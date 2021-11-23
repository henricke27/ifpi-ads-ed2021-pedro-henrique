#include "noPilha.h"

using namespace std;

class Pilha{
	public:
		NoP *topo;
		
		Pilha(){
			topo = NULL;
		}
		
		void push(char n){
			NoP *novo = new NoP(n);
			if(topo==NULL){
				topo = novo;
			}else{
				novo->ant = topo;
				topo->prox = novo;
				topo = novo;
			}
		}
		
		char pop(){
			char caracter = topo->nome;
			topo = topo->ant;
			return caracter;
		}
		
		int isEmpty(){
			return topo==NULL ? 0 : 1;
		}
	
};
