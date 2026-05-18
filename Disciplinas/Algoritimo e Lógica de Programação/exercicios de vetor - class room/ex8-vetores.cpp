#include <iostream>
#include <vector> 

using namespace std; 

int main() {
	
	int n,k;
	
	cin >> n; 
	
	vector<int> vetor(n);
	
	for(int i= 0; i < n; i++) {
		
		cout << "Vetor "; 
		cin >> vetor[i];
		
	}
	 cout << " Remover indice "; 
	 cin >> k; 
	 
	 vetor.erase(vetor.begin() + k);
	 
	 cout << "Resultado ";
	 
	 for(int i =0; i < n-1; i++) {
		 
		 cout << vetor[i] << " "; }
	
	
	return 0;}
