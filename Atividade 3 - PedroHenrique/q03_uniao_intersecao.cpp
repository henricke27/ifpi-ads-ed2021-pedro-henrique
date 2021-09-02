#include <stdlib.h>
#include <iostream>
#define n 5

using namespace std; 
 
main(){
	int tam = 0;
	int vetor_a[n], vetor_b[n];
	int vetor_i[tam];
	int vetor_u[2 * n] = {};
	int u = 0;
		
	for(int i = 0; i < n; i++){
		cout<<"Valor para a posicao "<< i << " do primeiro vetor: ";
		cin>>vetor_a[i]; 
		vetor_u[u] = vetor_a[i];
		u++;
	}
	
	cout<<"\n";
	
	for(int i = 0; i < n; i++){
		cout<<"Valor para a posicao "<< i << " do primeiro vetor: ";
		cin>>vetor_b[i]; 
		vetor_u[u] = vetor_b[i];
		u++;
	}
	
	cout<<"\n";
	
	int k = 0;
	
	for(int i = 0; i < n; i++){
		int valor_a = vetor_a[i];
		for(int j = 0; j < n; j++){
			int valor_b = vetor_b[j];
			if(valor_a == valor_b){
				vetor_i[k] = valor_a;
				tam++;
				k++;
			}
		}
	}
	
	cout<<"Vetor uniao:";
	for(int i = 0; i < 2 * n; i++){
		cout<< " " <<vetor_u[i];
	}
	
	cout<<"\n";

	cout<<"Vetor intersecao:";
	for(int i = 0; i < tam; i++){
		cout<< " " <<vetor_i[i];
	}
	
	cout<<"\n\n";
	system("PAUSE");
	
}
