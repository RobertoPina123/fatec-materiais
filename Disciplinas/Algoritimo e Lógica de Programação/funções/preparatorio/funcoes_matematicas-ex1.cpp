/*Escreva uma função int contaDigitos(int n) que conta quantos dígitos tem o inteiro positivo n (ex:
contaDigitos(1234) = 4). No programa principal, leia um inteiro N (1 ≤ N ≤ 5) e, em seguida, N
inteiros positivos, um por linha. Para cada um, exiba o resultado no formato DIGITOS: X.
Dica
Divida n por 10 repetidamente enquanto n > 0, contando quantas divisões foram feitas.
Exemplos
Entrada:Entrada:
3
5
42
10002
99
100
Saída:
Saída:
DIGITOS: 1
DIGITOS: 2
DIGITOS: 4 */

#include<iostream> 
using namespace std;

int ContaDigitos(int n) {

	int contador = 0; 
	
	for(int i=0; n > 0; i++) {
		n = n/10;
		contador++;}
		
		n = contador; 
		return n;} 

int main() {
	
	int N, n; 
	cin >> N;
	
	for(int i=0; i<N; i++) {
		cin >> n;
		cout << "DIGITOS: " << ContaDigitos(n) << endl; }
	return 0;}
