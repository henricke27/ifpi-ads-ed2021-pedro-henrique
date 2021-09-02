#include <stdlib.h>
#include <iostream>
#define n 10

using namespace std;

main(){	
	int vetor[n] = {0, 1};
	int termo1 = 0;
	int termo2 = 1;
	
	for(int i = 2 ; i < n; i++){
		vetor[i] = termo1 + termo2;
		termo1 = termo2;
		termo2 = vetor[i];
	}
	
	cout<<"Sequencia fibonacci:";
	for(int i = 0 ; i < n; i++){
		cout<<" "<<vetor[i];
	}
	
	cout<<"\n\n";
	system("PAUSE");
}
