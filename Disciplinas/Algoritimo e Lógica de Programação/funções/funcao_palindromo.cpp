#include<iostream>
using namespace std;

int palindromo (int vetor[], int n){
	
	for(int i=0; i<n/2; i++){
		if(vetor[i] != vetor[n-1-i]) {return 0;}
		}
	return 1; 
	}

int main() {
	
	int n;
	cin >> n;
	int vetor[n];
	
	for(int i =0; i<n; i++) {
		cin >> vetor[i];}
	

	
	if (palindromo(vetor,n)) {cout << "PALINDROMO";}
	else cout << "NAO PALINDROMO"; 
	
	return 0;}
