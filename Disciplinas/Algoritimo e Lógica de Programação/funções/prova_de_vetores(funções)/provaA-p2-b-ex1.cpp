/*1.30 Leia um inteiro N (1 ≤ N ≤ 10) e, em seguida, N números reais separados por espaço. Armazene-os em
um vetor e calcule e exiba a média aritmética com duas casas decimais.
A saída deve seguir o formato: MEDIA: X.XX
Exemplos
Entrada:
4
10.0 20.0 30.0 40.0
Saída:
MEDIA: 25.00
Entrada:
3
7.5 3.5 5.0
Saída:
MEDIA: 5.33*/

#include<iostream>
#include<iomanip> 
using namespace std; 

float media_aritimetica(float vetor[], int n) {
	float contador = 0; 
	for(int i = 0; i<n; i++) {
		contador = contador + vetor[i];	}
	
	contador = contador/n; 
		return contador; 
		}


int main(){
	
	int n; cin >>n; float vetor[n]; 
	
	for(int i = 0 ; i< n; i++){cin >> vetor[i];}
	
	float resultado = media_aritimetica(vetor,n); 
	
	cout << "MEDIA: ";
	cout << fixed << setprecision(2) << resultado; 
	
	return 0; }
