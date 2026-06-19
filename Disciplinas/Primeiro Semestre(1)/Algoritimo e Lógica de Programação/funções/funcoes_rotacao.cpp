#include <iostream> 
using namespace std; 

void rotacao(int v[], int n, int k) {
    int aux[10];
    int pos = 0;
    
    // primeiro copia os últimos k elementos
    for(int i = n-k; i < n; i++) {
        aux[pos++] = v[i];
    }
    
    // depois copia o restante
    for(int i = 0; i < n-k; i++) {
        aux[pos++] = v[i];
    }
    
    // copia o auxiliar de volta para o original
    for(int i = 0; i < n; i++) {
        v[i] = aux[i];
    }
}

int main() {
	
	int n,k;
	cin >> n;
	cin >> k; 
	
	int v[n]; 
	
	for(int i = 0;i<n; i++) {
		cin >> v[i];}
	
	rotacao(v,n,k); 
	
	for(int i = 0;i<n; i++) {
		cout << v[i] << " ";}
	
	return 0;}
