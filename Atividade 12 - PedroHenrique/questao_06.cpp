#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

char comparacaoSinais(int a, int b, char sinal){ // M�todo auxiliar;
	int r;
	if(sinal == '+'){
		r = a + b;
	}
	if(sinal == '-'){
		r = a - b;
	}
	if(sinal == '*'){
		r = a * b;
	}
	if(sinal == '/'){
		r = a / b;
	}
	return r + '0';
}

int main(){
	Pilha *operacao = new Pilha(); // Armazena os n�meros da opera��o;
	Pilha *resultado = new Pilha(); // Acumula os valores do resultado;
	string expressao = "94-55+*"; 

	for(int i=0; i<expressao.length(); i++){
		if(!(expressao[i] == '+' || expressao[i] == '-' || expressao[i] == '*' || expressao[i] == '/')){
			operacao->push(expressao[i]);
		}else{ // Detectou um sinal...
			int segOpe;
			int priOpe;
			
			if(operacao->isEmpty() != 0){ 
				segOpe = operacao->pop() - '0'; // Retira o segundo n�mero da pilha; 
				priOpe = operacao->pop() - '0'; // Retira o primeiro n�mero da pilha; 
			}
			//Se o char antecessor for tamb�m um sinal, significa que ele quer operar com os valores anteriores, ent�o ser� requisitado os valores da pilha "resultado";
			if(expressao[i-1] == '+' || expressao[i-1] == '-' || expressao[i-1] == '*' || expressao[i-1] == '/'){ 
				int segRes = resultado->pop() - '0';
				int priRes = resultado->pop() - '0';
			
				resultado->push(comparacaoSinais(priRes, segRes, expressao[i]));
				
			}else{ //Se n�o, o calculo � feito com valores da pilha "operacao";
				resultado->push(comparacaoSinais(priOpe, segOpe, expressao[i]));
			}
		}	
	}
	
	//resposta
	cout<<"Resultado: "<<resultado->pop() - '0'<<endl;
	
	return 0;
}
