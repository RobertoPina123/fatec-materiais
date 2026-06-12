/*Escreva uma função double fahrenheitParaCelsius(double f) que converte Fahrenheit para Celsius
usando C = (F − 32) × 5,0/9,0. No programa principal, leia um inteiro N (1 ≤ N ≤ 5) e, em seguida,
N temperaturas em Fahrenheit, uma por linha. Para cada uma, exiba o resultado com uma casa
decimal no formato X.X C.
Exemplos
Entrada:Entrada:
2
32.0
212.01
98.6
Saída:
Saída:
37.0 C
0.0 C
100.0 C*/

#include<iostream>
#include<iomanip> 
using namespace std; 

double fahrenheitParaCelsius(double f) {
	f = (f-32)*5.0/9.0;
	return f; 
	}

int main() {
	
	int N;
	cin >> N;
	double f; 
	
	for(int i =0; i<N; i++) {
		cin >> f;
		
		cout << fixed << setprecision(1) << fahrenheitParaCelsius(f) << " C" << endl;
		
		}
	
	return 0;}
