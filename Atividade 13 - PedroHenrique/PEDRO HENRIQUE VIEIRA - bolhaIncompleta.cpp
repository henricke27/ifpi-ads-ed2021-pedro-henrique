#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void bolha (int n,int* v) {
	int i,j;
	bool trade;
	for(i=n-1; i>0; i--){
		trade = false;
		for(j=0; j<i; j++){
			if(v[j] > v[j+1]){
				int temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
				trade = true;
			}
		}
		if(!trade){
			break;
		}
	}
}

int PesquisaBinaria(int n, int *v, int procurado){
	int ini = 0;
	int fim = n-1;
	
	while(ini<=fim){
		int meio = (int) ((ini+fim) / 2);
		if(procurado < v[meio]){
			fim = meio - 1;
		}else if(procurado > v[meio]){
			ini = meio + 1;
		}else{
			return meio;
		}
	}
	return -1;
}
	 
main(){
	int v[5] = {};
	for(int i=0;i<=4;i=i+1){
		printf("Digite o valor %d :",i);
		scanf("%d",&v[i]);
	}
	
	bolha(5, v);
	
	printf("\nElementos ordenados...\n");
	for(int i=0; i<5; i++){
		printf("%d\n", v[i]);
	}
	
	int pos, elem;
	
	cout<<"\nElemento a ser pesquisado: ";
	cin>>elem;
	
	pos = PesquisaBinaria(5,v,elem);
	
	pos == -1 ? cout<<"\nElemento nao encontrado!" : cout<<"\nElemento "<<v[pos]<<" encontrado na posicao "<<pos;
}
