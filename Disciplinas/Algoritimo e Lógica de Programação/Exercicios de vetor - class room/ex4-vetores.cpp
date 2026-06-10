#include <iostream>
#include <vector> 
#include <iomanip>

using namespace std;

int main() {
	
	int n; 	

	
	cin >> n; 
	
	vector<float> vetor(n);
	
	for(int i = 0; i < n; i++) {
		
		cout << "Elementos "; 
		cin >> vetor[i];
		
		}
	float soma = 0;
	
	for( int i = 0; i <n; i++) {
		soma = soma +vetor[i];
		
		
		}
	
	cout << fixed << setprecision(2);
	cout << " Soma: " << soma; 
	cout << " Media: " << soma/n; 
	
	
	
	
	
	
return 0;}
