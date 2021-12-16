#include <stdlib.h>
#include <stdio.h>

#define fmt "%d"

typedef int Item;
typedef struct no{
	Item item;
	struct no *prox;
}*Lista;

Lista inclue(Item x, Lista y){
	Lista w = (struct no*)malloc(sizeof(struct no));
	w->item = x;
	w->prox = y;
	return w;
}

void exibe(Lista x){
	while(x!=NULL){
		printf(fmt "\n", x->item);
		x = x->prox;
	}
}

void anexa(Lista x, Lista y){
	if(y==NULL){
		return;
	}else{
		while(x->prox!=NULL){
			x = x->prox; 
		}
		x->prox = y;
	}
}

void destroi(Lista x){
	while(x!=NULL){
		Lista y = x;
		x = x->prox;
		free(y);
	}
}

int ocorrencias(Item x, Lista y){ 
	int ocorrencias = 0;
	while(y!=NULL){
		if(x == y->item){
			ocorrencias++;
		}
		y = y->prox;
	}
	return ocorrencias;
}

int ultimo(Lista x){
	while(x->prox!=NULL){
		x = x->prox;
	}
	return x->item;
}

Lista inversa(Lista x){
	Lista y = NULL;

	while(x!=NULL){
		y = inclue(x->item, y);
		x = x->prox;
	}
	
	return y;
}
