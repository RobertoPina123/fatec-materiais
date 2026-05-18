#include <iostream> 
#include <vector> 

using namespace std; 

int main() { 
	
	
int n, aux, flag; int contador = 0; 

cin >> n; 

vector <int> vetor(n);

for(int i = 0; i < n;i++){
	cout << "vetor "; 
	cin >> vetor[i]; }

flag = 1; 
 

while(flag) {
	flag = 0; 
	for(int i = 0; i < n-1; i++) {
		if(vetor[i] > vetor[i+1]){
			aux = vetor[i];
			vetor[i] = vetor[i+1];
			vetor[i+1] = aux; 
			flag=1;  
			contador++; 
			}
	} }
	
	cout << "Ordenados "; 
	for(int i= 0; i < n ; i++) {
		cout << vetor[i] << " "; 
		
		}
	cout << "trocadas realizadas " << contador << endl; 
		

return 0;} 
