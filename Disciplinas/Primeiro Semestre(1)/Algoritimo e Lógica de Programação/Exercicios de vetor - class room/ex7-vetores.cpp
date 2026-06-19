#include <iostream> 


using namespace std; 

int main() {
	
	int n; 
	
	cin >> n;
	
	int vetor[n];
	
	for(int i=0;i<n;i++) {
		cout << "Original "; 
		cin >> vetor[i]; 
		}
	
	
	cout << "Invetido "; 
	
	for(int i=0;i< n;i++) {

	  cout << vetor[n - 1 - i] << " "; 	
		   
		}
		
		
	
	
	
	return 0; }
