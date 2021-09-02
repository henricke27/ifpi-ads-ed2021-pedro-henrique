#include <stdlib.h>
#include <iostream>

using namespace std; 
 
int main(){
	int elementos; 
	
	cout<<"Quantidade de elementos do vetor: ";
	cin>> elementos;
	
	int index_b = elementos - 1;
	int vetor_a[elementos] = {};
	int vetor_b[elementos] = {};
	
	for(int i = 0; i < elementos; i++){
		cout<<"Elemento na posicao "<< i <<": ";
		cin>>vetor_a[i];
	}
	
	for(int i = 0; i < elementos ; i++){
		vetor_b[index_b] = vetor_a[i]; 
		index_b--;
	}
	cout<<"\n";
	
	for(int i = 0; i < elementos ; i++){
		cout<<"Elemento na posicao "<< i <<": " << vetor_b[i] << "\n";
	}
	cout<<"\n\n";
	system("PAUSE");
	
}
