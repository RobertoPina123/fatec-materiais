/*leia um inteiro N (1 ≤ N ≤ 10) e, em seguida, N números reais separados por espaço. Armazene-os
em um vetor, calcule a média aritmética e exiba, na ordem original, todos os elementos estritamente
maiores que a média, com duas casas decimais, um por linha. Se nenhum elemento for maior que a
média, não exiba nada.
Exemplos
Entrada:
4
2.0 8.0 4.0 10.0
Saída (média = 6.00):
8.00
10.00
Entrada:
5
10.0 20.0 30.0 40.0 50.0
Saída (média = 30.00):
40.00
50.00*/

#include<iostream>
#include<iomanip>
using namespace std; 



float media_ari (float vetor[], int n) {
	
	int acumulador = 0; 
	
	for(int i = 0; i<n; i++) {
		
		acumulador = acumulador+vetor[i]; }
		
		acumulador = acumulador/n;
		
		return acumulador;}

int main() {
	
	int n; 

		
	cin >> n;
	
	 float vetor[n];
	
	for(int i = 0; i<n; i++) {
		cin >> vetor[i];}
	
	float media = media_ari(vetor,n); 
	
 
	cout << "média =  ";
	cout << fixed << setprecision(2) << media;
	
    for(int i =0; i<n; i++) {
		if(vetor[i] > media) {
			cout << fixed << setprecision(2) << vetor[i] << endl;}} 
	
	return 0;}
