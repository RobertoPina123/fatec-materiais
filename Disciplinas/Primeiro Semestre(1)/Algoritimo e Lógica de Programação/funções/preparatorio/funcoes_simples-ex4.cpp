/*Escreva uma função int minimo(int a, int b) que retorna o menor entre dois inteiros sem usar
funções de biblioteca. No programa principal, leia um inteiro N (1 ≤ N ≤ 5) e, em seguida, N pares
de inteiros, um par por linha. Para cada par, chame a função e exiba o resultado no formato MINIMO: X.
Entrada:Entrada:
3
7 3
-1 -5
4 42
0 1
100 50
Saída:
Saída:
MINIMO: 3
MINIMO: -5
MINIMO: 4
MINIMO: 0
MINIMO: 50*/

#include<iostream> 
using namespace std; 

int minimo(int a, int b) {
	if(a < b) { return a;}
	else return b;
	}

int main() {
	
	int N,a,b;
	cin >> N;
	
	for(int i =0; i<N; i++) {
		cin >> a >> b;
		
		cout << "MINIMO: " << minimo(a,b) << endl; }
	
	return 0;}
