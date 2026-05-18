#include <iostream> 
#include <vector> 
using namespace std; 


int main() {
	
	int n; 
	int i; 
	
	
	cout << "Digite n "; 
	cin >> n; 
	
	vector<int>vet(n);
	
	
	for( i = 0; i < n; i++) {
		
		cout << "Digite os elementos " ; 
		cin >> vet[i];  }
		
		
	 cout << "vetor " ;
	 
	 
	 for(i = 0 ; i < n ; i++) {
		 
		 
		  cout << vet[i] << " "; 
		 
		 }
	return 0;}
