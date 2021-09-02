#include <stdlib.h>
#include <iostream>
#define n 5

using namespace std;

main(){	
	int vetor[n] = {};
	
	for(int i = 0; i < n; i++){
		cout<<"Valor para a posicao "<< i <<" do vetor: ";
		cin>>vetor[i];
	}
	
	int maior = vetor[0];
	int menor = vetor[0];
	int pos_maior = 0;
	int pos_menor = 0;
	
	for(int i = 0; i < n; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
			pos_maior = i;
		}
		if(vetor[i] < menor){
			menor = vetor[i];
			pos_menor = i;
		}
	}
	cout<<"\n";
	
	cout<<"Maior elemento: "<<maior<<" | "<<" Posicao: "<<pos_maior;
	cout<<"\n";
	cout<<"Menor elemento: "<<menor<<" | "<<" Posicao: "<<pos_menor;
	
	cout<<"\n\n";
	system("PAUSE");
}
