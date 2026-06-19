/*Escreva uma função bool ehPerfeito(int n) que retorna true se n for um número perfeito e false
caso contrário. Um número é perfeito quando é igual à soma de todos os seus divisores próprios
(excluindo ele mesmo). Por exemplo, 6 = 1 + 2 + 3 e 28 = 1 + 2 + 4 + 7 + 14. No programa principal,
leia um inteiro N (1 ≤ N ≤ 5) e, em seguida, N inteiros positivos, um por linha. Para cada um, exiba
PERFEITO ou NAO PERFEITO.
Exemplos
Entrada:Entrada:
3
6
12
282
1
496
Saída:
Saída:
PERFEITO
NAO PERFEITO
PERFEITO
NAO PERFEITO
PERFEITO */

#include<iostream>
using namespace std; 

bool ehPerfeito(int n) {
	int vetor[n],vetor_somado[n], soma ; 
	
	for(int i = 1; i<n; i++) {
		vetor[i] = i; }
	for(int i=1; i<n; i++) {
		if(vetor[i] % i == 0) {
			vetor_somado[i] = vetor[i];}
			else vetor_somado[i] = 0; }
	for(int i=1; i<n; i++) {
		soma = soma + vetor_somado[i]; 
		}
	 if(soma == n) return true; 
	 else return false; 
	}
	

int main() {
	
	int N,x; 
	
	
	cin >> N; 
	
	for(int i=0; i<N; i++) {
		
		cin >> x; 
		if(ehPerfeito(x)) cout << "PERFEITO" << endl;
		else cout << "NAO PERFEITO" << endl; 
		}
		
		
	return 0; }
