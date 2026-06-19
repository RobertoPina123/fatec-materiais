/*m inteiro N (1 ≤ N ≤ 10) e, em seguida, N números inteiros separados por espaço. Armazene-os
em um vetor e verifique se ele é um palíndromo, ou seja, se a sequência lida da esquerda para a direita
é idêntica à lida da direita para a esquerda. Exiba PALINDROMO se for e NAO PALINDROMO caso contrário.
Exemplos
Entrada:
5
1 2 3 2 1
Saída:
PALINDROMO
Entrada:
4
1 2 3 4
Saída:
NAO PALINDROMO
Entrada:
1
7
Saída:
PALINDROMO*/

#include<iostream>
using namespace std; 

int palindromo (int vetor[], int n){
	for(int i=0; i<n/2; i++){
		if(vetor[i] != vetor[n-1-i]) {return 0;}
		}
	return 1; 
	}
	

int main() {
	int n; cin >> n; int vetor[n]; for(int i=0; i<n; i++) {cin >> vetor[i]; }
	
	if (palindromo(vetor,n)) {cout << "PALINDROMO";}
	else cout << "NAO PALINDROMO";
	
	return 0; }
