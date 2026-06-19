/*Leia um inteiro N (2 ≤ N ≤ 10) e, em seguida, N números inteiros distintos separados por espaço.
Armazene-os em um vetor e exiba o segundo maior valor.
A saída deve seguir o formato: SEGUNDO MAIOR: X
Exemplos
40
Entrada:Entrada:
5
10 40 20 30 503
100 200 150
Saída:Saída:
SEGUNDO MAIOR: 40SEGUNDO MAIOR: 150 */

#include<iostream> 
using namespace std; 

void segundomaior( int vetor[], int n) {
	
	for(int i = 0; i< n-1; i++) {
		
		for(int j = 0; j <n -1; j++) {
						
			if(vetor[j] > vetor[j+1]){
				
				int tmp = vetor[j]; 
				vetor[j] = vetor[j +1 ]; 
				vetor[j + 1] =  tmp;}}}
			
	}
	
int main() {
	int n;
	cin >> n;
	
	int vetor[10]; 
	
	for(int i = 0; i<n; i++) {
		cin >> vetor[i];}
		
	segundomaior(vetor,n);
	
	cout << "SEGUNDO MAIOR: " << vetor[n-2];
		
	
	
	return 0;}
