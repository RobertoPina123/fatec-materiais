#include <iostream>
#include <vector>

using namespace std; 

int main() {
	
	int vet[5];
	int valor, indice; 
	
	for( int i = 0; i <6 ; i++) { 
	cout << "vetor original "; 
	cin >> vet[i];
}

    cout << "indice para ser alterado "; 
	cin >> indice; 
	
	
	cout << "Novo valor "; 
	cin >> valor;
	
	vet[indice] = valor; 
	
	cout << "Vetor atualizado "; 
	
	for( int i = 0; i <6 ; i++){
		
		cout << vet[i] << " ";
				
		}
		
	return 0;}
