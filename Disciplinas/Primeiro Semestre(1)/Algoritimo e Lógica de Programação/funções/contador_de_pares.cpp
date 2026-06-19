#include<iostream> 
using namespace std; 


int contar_pares (const int v[], int n) {
	int contador = 0 ;
	for(int i = 0; i<n; i++) {
		if(v[i] % 2 == 0) {
			contador++;}
			 } 
			 return contador; }

int main() {
	
	int n; 
	cin >> n;
	 
	int v[n];
	
    for(int i =0 ; i<n; i++) {
		cin >> v[i];
		}	
	cout << contar_pares(v,n); 
	
	return 0; }
