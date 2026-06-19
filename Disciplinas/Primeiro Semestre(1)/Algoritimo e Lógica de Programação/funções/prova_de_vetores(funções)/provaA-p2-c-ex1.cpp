/*Leia um inteiro N (1 ≤ N ≤ 10) e, em seguida, N números inteiros separados por espaço. Armazene-os
em um vetor e exiba quantos são pares.
A saída deve seguir o formato: PARES: X
Exemplos
30
Entrada:Entrada:
5
2 7 4 9 64
1 3 5 7
Saída:Saída:
PARES: 3PARES: 0 */

#include<iostream> 
using namespace std;

int contador_pares (const int vetor[], int n) {
	int contador = 0;
	for(int i =0; i<n; i++) {
		if(vetor[i] %2 == 0 || vetor[i] == 0)  {
			contador++;}
		}
		
	return contador;
	} 

int main(){
	
	int n; 
	cin >> n;
	
	int vetor[10];
	
	for (int i =0; i<n; i++) {
		cin >> vetor[i];}
	
	cout << "PARES: " << contador_pares(vetor, n); 
	
	
	
	return 0; }
