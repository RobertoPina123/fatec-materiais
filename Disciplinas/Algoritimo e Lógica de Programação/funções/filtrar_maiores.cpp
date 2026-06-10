//(exercicio3.cpp) Faça um programa que contenha uma função chamada filtra_maiores 
//que receba um vetor de inteiros, seu tamanho e um valor de referência K, 
//copie para um vetor de saída apenas os elementos estritamente maiores que K, 
//e retorne quantos elementos foram copiados. No main, leia um inteiro N,
 //em seguida N números inteiros separados por espaço, e depois um inteiro K. 
 //Chame a função e exiba os elementos maiores que K separados por espaço. 
 //Se não houver nenhum, exiba NENHUM.

#include<iostream> 
using namespace std; 

int filtrar_maiores (int vetor[], int maiores[], int n , int k) {
	int contador = 0;
	for(int i =0; i<n; i++) {
		if(vetor[i] > k) {
			maiores[contador] = vetor[i];
			contador++;
			}
			}
	return contador;
	}


int main() {
	
	int n = 0,k = 0;
	cin >> n; 
	cin >> k; 
	
	int vetor[n] = {0}, maiores[n] = {0};
	
	for(int i = 0; i <n; i++) {
		cin >> vetor[i];}
	
	
	
	
	int total = filtrar_maiores(vetor,maiores,n,k); 
	
	if(total > 0) {
		for(int i = 0;i < total; i++) {
			cout << maiores[i] << " "; 
		}		
		}
	else cout << "NENHUM"; 
		
	return 0; }
