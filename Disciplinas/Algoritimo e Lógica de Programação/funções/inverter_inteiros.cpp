//(exercicio1.cpp) Faça um programa que contenha uma função chamada inverte que receba um vetor de inteiros 
//e seu tamanho e inverta a ordem dos elementos no próprio vetor.
//No main, leia um inteiro N e em seguida N números inteiros separados por espaço, 
//chame a função e exiba o vetor invertido com os elementos separados por espaço

#include<iostream> 
using namespace std; 

void inverte (int vetor[], int n )  {
	for(int i =0; i <n/2 ; i++) {
	int tmp = vetor[i]; 
	vetor[i] = vetor[n - 1 - i]; 
	vetor[n-1-i] = tmp;  }
	} 


int main() {
	
	int n;
	
	cin >> n;
	
	int vetor[n];
	
	for(int i =0; i<n; i++) {
    cin >> vetor[i];}
    
    inverte(vetor, n); 
    
    for (int i = 0; i<n ; i++) {
		cout << vetor[i] << " ";}

	return 0 ; }
