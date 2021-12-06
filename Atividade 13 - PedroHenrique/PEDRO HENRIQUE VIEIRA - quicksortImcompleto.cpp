#include<stdio.h>
#include<iostream>
using namespace std;

void Quick(int vetor[], int inicio, int fim){
	int i, j, temp, pivo, meio;
	i = inicio;
	j = fim;
	meio = (int) ((inicio + fim) / 2);
	pivo = vetor[meio];
	while(i < j){
		while(vetor[i] < pivo){
			i++;
		}
		while(vetor[j] > pivo){
			j--;
		}
		if(i<=j){
			temp = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = temp;
			i++;
			j--;	
		}	
	}
	if(inicio < j){
		Quick(vetor, inicio, j);
	}
	if(i < fim){
		Quick(vetor, i, fim);
	}

}  

int PesquisaBinaria(int n, int v[], int procurado){
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
int main(){
   
	int vetor[12] = {1, 4,3, 9,10,50,13,20,25,67,87,100};
	
	Quick(vetor, 0, 11);
	
	cout<<"Vetor ordenado"<<endl;
	for(int i=0;i<12;i++){
		cout<<vetor[i]<<endl;
		
		
	}
	
	int pos, elem;
	
	cout<<"\nElemento a ser pesquisado: ";
	cin>>elem;
	
	pos = PesquisaBinaria(12,vetor,elem);
	
	pos == -1 ? cout<<"\nElemento nao encontrado!" : cout<<"\nElemento "<<vetor[pos]<<" encontrado na posicao "<<pos;

}

