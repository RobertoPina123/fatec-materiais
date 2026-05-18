#include <iostream> 
#include <vector> 
using namespace std;
    int main() {
	
	int n; 
	
	cin >> n;
	
	vector<int> vetor(n);  
	
	for( int i = 0; i < n; i++){
		
		cout << "Vetor "; 
		cin >> vetor[i]; 
		
		}
		
	int maior_vetor = vetor[0], menor_vetor = vetor[0], maior_indice = vetor[0], menor_indice = vetor[0]; 
	
	for(int i = 0; i < n ; i++) {
		
		
    if (vetor[i] > maior_vetor) {
		
	 maior_vetor = vetor[i];
	 maior_indice = i; } 
		
	if(vetor[i] < menor_vetor) 
	{
		menor_vetor = vetor[i];
		menor_indice = i; 
		}	}
		
	cout << "Maior " << maior_vetor << "(Indice " << maior_indice << ")"; 
	cout << "Menor " << menor_vetor << "(Indice " << menor_indice << ")"; 
			
	
	return 0;}
