#include <iostream>
#include <vector> 
using namespace std; 


int main() {
	
	int n,x; 
	
	cin >> n; 
	
	vector<int> vetor(n);
	
	for(int i = 0; i < n; i++) { 
		cout << "Vetor "; 
		cin >> vetor[i]; 
		}
		
	cout << "Buscar "; 
	cin >> x;
	for(int i =0; i < n; i++) {
		if (vetor[i] == x)
		cout << "encontrado no indices " << i << " " << endl; 
		else cout << "Valor nao encontrado ";
		
		 }
		
		
	
	
	
	
	
	
return 0; }
