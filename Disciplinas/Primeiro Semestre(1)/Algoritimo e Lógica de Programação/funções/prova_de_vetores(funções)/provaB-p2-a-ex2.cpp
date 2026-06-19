/*Leia um inteiro N (2 ≤ N ≤ 10) e, em seguida, N números inteiros separados por espaço. Armazene-os em
um vetor e verifique se estão em ordem não-decrescente (podendo haver valores iguais consecutivos).
Exiba ORDENADO se estiver e NAO ORDENADO caso contrário.
Exemplos
Entrada:Entrada:
5
1 3 5 7 93
5 5 8
Saída:Saída (iguais são permitidos):
ORDENADOORDENADO
Entrada:
4
1 3 2 5
Saída:
NAO ORDENADO*/

#include<iostream> 
using namespace std; 

bool ordenado (int vetor[], int n) {
           
	for(int i =0; i<n-1; i++) {
		
		if(vetor[i] > vetor[i+1])
		
		 return false; 
			
		}
		return true; }
	
	
	    

int main() {
	
	int n; cin >> n; int vetor[n];   for(int i =0; i<n; i++) {cin >> vetor[i];}
	
	int resultado = ordenado(vetor,n); 
	
	if (resultado) {cout << "ORDENADO";}
	if(!resultado){ cout << "NAO ORDENADO"; }
	
	
	return 0;}
