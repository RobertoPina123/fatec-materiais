/*2. Escreva uma função int quadrado(int n) que retorna n2 . No programa principal, leia um inteiro N
(1 ≤ N ≤ 10) e, em seguida, N inteiros separados por espaço. Para cada um, chame a função e exiba
o resultado no formato QUAD: X.
Exemplos
Entrada:Entrada:
4
3 -2 0 52
1 10
Saída:Saída:
QUAD: 9
QUAD: 4
QUAD: 0
QUAD: 25 */

#include<iostream>
using namespace std; 


int quadrado(int n) {
	
	
	n = n*n; 
	
	return n;
	
	}

int main() {
	
	int N,n;
	cin >> N;
	
	for(int i =0; i<N;i++) {
		cin >>n; 
		int n2 = quadrado(n); 
		cout << "QUAD: " << n2 << endl;	
	}
	return 0; }
