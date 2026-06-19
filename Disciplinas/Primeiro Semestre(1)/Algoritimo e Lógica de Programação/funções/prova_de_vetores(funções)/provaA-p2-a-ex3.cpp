/*Leia um inteiro N (2 ≤ N ≤ 10) e, em seguida, N números inteiros separados por espaço. Armazene-os
em um vetor e ordene-os em ordem crescente utilizando o algoritmo Bubble Sort sem utilizar funções.
Exiba o vetor ordenado com os elementos separados por espaço.
Dica: O Bubble Sort percorre o vetor repetidas vezes comparando pares de elementos adjacentes e os
trocando quando estão fora de ordem.
Exemplos
Entrada:
5
64 25 12 22 11
Saída:
11 12 22 25 64
Entrada:
4
3 1 4 2
Saída:
1 2 3 4 */

#include<iostream>
using namespace std; 

void bubble_sort (int vetor[], int  n) {
	
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
	
	int vetor[n]; 
	
	for(int i =0; i<n; i++) {
		cin >> vetor[i];}
		
	bubble_sort(vetor,n); 
	
	for(int i =0; i< n; i++) {
		cout << vetor[i] << " "; }
	
	return 0;}
