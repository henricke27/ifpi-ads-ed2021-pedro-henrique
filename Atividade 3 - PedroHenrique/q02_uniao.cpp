#include <stdlib.h>
#include <iostream>

using namespace std; 
 
main(){

	int elementos_a, elementos_b, elementos_c;
	int index_c = 0;
	
	cout<<"Quantidade de elementos do primeiro vetor: ";
	cin>>elementos_a;
	cout<<"Quantidade de elementos do segundo vetor: ";
	cin>>elementos_b;
	cout<<"\n";
	
	elementos_c = elementos_a + elementos_b;
	
	int vetor_a[elementos_a];
	int vetor_b[elementos_b];
	int vetor_c[elementos_c];
	
	for(int i = 0; i < elementos_a; i++){
		cout<<"Elemento na posicao "<< i <<" do primeiro vetor: ";
		cin>>vetor_a[i];
		vetor_c[index_c] = vetor_a[i];
		index_c++;
	}
	
	cout<<"\n";
	
	for(int i = 0; i < elementos_b; i++){
		cout<<"Elemento na posicao "<< i <<" do segundo vetor: ";
		cin>>vetor_b[i];
		vetor_c[index_c] = vetor_b[i];
		index_c++;
	}
	
	cout<<"\n";
	
	cout<<"Vetor uniao:";
	for(int i = 0; i < elementos_c; i++){
		cout<< " " <<vetor_c[i];
	}

	cout<<"\n\n";
	system("PAUSE");
}
