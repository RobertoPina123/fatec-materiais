/*Leia um inteiro N (2 ≤ N ≤ 10), depois um inteiro K (1 ≤ K < N ) e, em seguida, N números inteiros
separados por espaço. Armazene-os em um vetor e rotacione-o K posições à direita: os últimos K
elementos passam a ocupar as primeiras posições, e os demais se deslocam K posições à frente. Exiba
o vetor resultante com os elementos separados por espaço
Entrada:
5
2
1 2 3 4 5
Saída (rot. 2 pos.: [4,5,1,2,3]):
4 5 1 2 3
Entrada:
4
1
10 20 30 40
Saída (rot. 1 pos.: [40,10,20,30]):
40 10 20 3 */

#include<iostream>
using namespace std; 

void rotacao(int v[], int n, int k) {
    int aux[10];
    int pos = 0;
    
    // primeiro copia os últimos k elementos
    for(int i = n-k; i < n; i++) {
        aux[pos++] = v[i];
    }
    
    // depois copia o restante
    for(int i = 0; i < n-k; i++) {
        aux[pos++] = v[i];
    }
    
    // copia o auxiliar de volta para o original
    for(int i = 0; i < n; i++) {
        v[i] = aux[i];
    }
}
	


int main() {
	
	int n,k; 
	cin >> n;
	cin >>k; 
	
	int vetor[n]; 
	
	for (int i = 0; i<n; i++) {
		cin >> vetor[i]; }
	
	rotacao(vetor,n,k); 
	
	for(int i =0; i<n; i++) {
		cout << vetor[i] << " ";}

	return 0;}
