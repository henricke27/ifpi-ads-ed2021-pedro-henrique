#include <stdlib.h>
#include <iostream>
#define n 5

using namespace std; 
 
main(){
	int vetor_a[n], vetor_b[n];
	
	for(int i = 0; i < n; i++){
		cout<<"Elemento na posicao "<< i <<" do vetor: ";
		cin>>vetor_a[i];
		if(i % 2 == 0){
			vetor_b[i] = 0;
		}else{
			vetor_b[i] = 1;
		}
	}
	
	cout<<"\n";
	
	cout<<"Vetor B:";
	for(int i = 0; i < n; i++){
		cout<<" "<<vetor_b[i];
	}
	
	cout<<"\n\n";
	system("PAUSE");
}
