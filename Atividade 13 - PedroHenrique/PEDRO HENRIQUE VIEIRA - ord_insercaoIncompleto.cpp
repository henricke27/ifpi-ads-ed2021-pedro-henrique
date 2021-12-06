#include <stdio.h>
#include <iostream>
//#include <array>
using namespace std;

int myarray[]={10,5,6,1,3};
//1,3,5,6,10

void ord_insercao(int v[],int tam){
	int i,j,temp;
	for(i=1;i<tam;i++){
		temp = v[i];
		j = i-1;
		while(v[j]>temp && j>=0){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = temp;
	}   
}

main(){
	cout<<"------------- Vetor antes da ordenacao -------------"<<endl;
	for(int i=0;i<5;i++){
		cout<<myarray[i]<<endl;
	}
	
	ord_insercao(myarray, 5);
	
	cout<<"\n------------- Vetor depois da ordenacao -------------"<<endl;
	for(int i=0;i<5;i++){
		cout<<myarray[i]<<endl;
	}
}

