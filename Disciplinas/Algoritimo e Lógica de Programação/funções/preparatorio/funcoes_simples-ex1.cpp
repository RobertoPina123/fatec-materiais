/*1. Escreva uma função bool ehDivisivel(int n, int d) que retorna true se n for divisível por d e false
caso contrário. No programa principal, leia um inteiro N (1 ≤ N ≤ 10) e, em seguida, N pares de
inteiros (n, d), um par por linha. Para cada par, chame a função e exiba DIVISIVEL ou NAO DIVISIVEL.
Exemplos
Entrada:Entrada:
3
10 5
7 3
9 32
8 4
5 2
Saída:
Saída:
DIVISIVEL
NAO DIVISIVEL
DIVISIVEL */

#include<iostream>
using namespace std;

bool ehDivisivel (int n, int d) {
	
 if(n % d == 0) return true;
 else return false;  
	
	}

int main() {
		
	int N,n,d;
	cin >> N;
	
	for(int i=0; i<N;i++) {
		cin >> n; 
		cin >> d; 
		if(ehDivisivel(n,d)) cout << "DIVISIVEL" << endl;
	     else cout << "NAO DIVISIVEL" << endl; } 
	

	
	
	
	
	return 0;}
