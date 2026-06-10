/*1. Leia um inteiro N (1 ≤ N ≤ 10) e, em seguida, N números reais separados por espaço. Armazene-os em
um vetor e exiba o menor valor com duas casas decimais.
A saída deve seguir o formato: MINIMO: X.XX
Exemplos
30
Entrada:Entrada:
5
3.5 1.2 4.8 0.9 2.73
100.0 50.0 75.5
Saída:Saída:
MINIMO: 0.90MINIMO: 50.00 */

#include<iostream> 
#include<iomanip> 

using namespace std; 

int menor_valor(float vetor[], int n) {
	
	float maior_i = 0, menor_i = 0, menor_v = vetor[0], maior_v = vetor[0];
	
	for(int i = 0; i <n; i++) {
		
		if(vetor[i] > maior_v) {
			maior_v = vetor[i]; 
			maior_i = i; }
			
		if(vetor[i] < menor_v) {
			
			menor_v = vetor[i];
			
			menor_i = i;
			}
		
		}
		
		return menor_v;}

int main() {
	int n; cin >>n; float vetor[n]; for(int i=0;i<n;i++) {cin >> vetor[i]; }
	
	
	float menor = menor_valor(vetor,n);
	
	cout << "MINIMO: " << fixed << setprecision(2) <<  menor;
	return 0;}
