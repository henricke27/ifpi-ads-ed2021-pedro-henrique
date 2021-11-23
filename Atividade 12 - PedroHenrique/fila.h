#include "noFila.h"

using namespace std;

class Fila{
	public:
		NoF *inicio;
		NoF *fim;
		
		Fila(){
			inicio = NULL;
			fim = NULL;
		}
		
		void append(char n){
			NoF *novo = new NoF(n);
			if(this->isEmpty()){
				inicio = novo;
				fim = novo;
			}else{
				fim->prox = novo;
				fim = novo;
			}
			
		}
		
		char pop(){
			char caracter = inicio->nome;
			inicio = inicio->prox;
			return caracter;
		}
		
		bool isEmpty(){
			return (inicio == NULL);
		}
	
	    void popAll(){
	    	inicio = NULL;
	    	fim = NULL;
		}

};
