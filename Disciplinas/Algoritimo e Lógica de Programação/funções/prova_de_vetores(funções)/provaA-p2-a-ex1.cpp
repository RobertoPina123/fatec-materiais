/*1.30 Leia um inteiro N (1 ≤ N ≤ 10) e, em seguida, N números inteiros separados por espaço. Armazene-os
em um vetor e os exiba em ordem inversa, com os elementos separados por espaço em uma única linha.
Exemplos
Entrada:
5
10 20 30 40 50
Saída:
50 40 30 20 10
Entrada:
3
7 3 9
Saída:
9 3 7 */

#include<iostream>
#include<sstream> 
using namespace std; 

string saida_invertida ( int vetor[], int n) {
		for (int i = 0; i<n; i++) {
		cin >> vetor[i];}
		
		ostringstream oss; 
		
		 for(int i = 0; i<n; i++) {
		oss << vetor[n-1-i] << " "; }
		
		return oss.str(); 
		
		
	}

int main() {
	
	int n; 
	cin >> n; 
	
	int vetor[n];
	
	cout << saida_invertida(vetor,n); 
		
	return 0;}
