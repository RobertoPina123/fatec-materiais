/*Leia um inteiro N (1 ≤ N ≤ 10) e, em seguida, N números inteiros separados por espaço. Armazene-os
em um vetor e exiba, nessa ordem, quantos são positivos, negativos e iguais a zero.
A saída deve seguir o formato:
POSITIVOS: X
NEGATIVOS: Y
ZEROS: Z
Exemplos
Entrada:
6
5 -3 0 8 -1 0
Saída:
POSITIVOS: 2
NEGATIVOS: 2
ZEROS: 2
Entrada:
3
10 20 30
Saída:
POSITIVOS: 3
NEGATIVOS: 0
ZEROS: 0*/

#include<iostream>
using namespace std; 

void  quantos_sao (int vetor[], int n, int &positivos , int &negativos, int &zeros) {
	

	
	for(int i =0; i<n; i++) {
		if(vetor[i] == 0) { 
			zeros++; 
			} 
		if(vetor[i] < 0) {
			negativos++;}
		if(vetor[i] > 0) {
			positivos++;}
			}
			}

int main(){
	
	
    
	
	int n;cin>> n; int vetor[n];for(int i=0;i<n;i++){cin >> vetor[i];}
	int  positivos = 0, negativos = 0, zeros = 0;
	quantos_sao(vetor,n, positivos, negativos, zeros);
	 

	cout << "POSITIVOS: " << positivos << endl; 
	cout << "NEGATIVOS: " << negativos << endl; 
	cout << "ZEROS: " << zeros; 
	return 0;}
