//Faça um programa que contenha uma função chamada bubble_sort 
//que receba um vetor de inteiros e seu tamanho e ordene os elementos em ordem crescente.
 //No main, leia um inteiro N e em seguida N números inteiros separados por espaço, 
 //chame a função e exiba o vetor ordenado com os elementos separados por espaço.


#include<iostream>
using namespace std; 


void buble_sort (int vetor[], int n) {

	
	for(int i = 0; i< n-1; i++) {
		
		for(int j = 0; j <n -1; j++) {
			
			
			if(vetor[j] > vetor[j+1]){
				
				int tmp = vetor[j]; 
				vetor[j] = vetor[j +1 ]; 
				vetor[j + 1] =  tmp;}}}
				}


int main() {
	
	
	int n;
	cin >> n; 
	int vetor[n];
	
	for(int i =0; i<n; i++) {
		cin >> vetor[i];}
	
	buble_sort(vetor,n);
	
	for(int i =0; i<n; i++) {
		cout << vetor[i] << " "; }
	
	
	return 0; }
