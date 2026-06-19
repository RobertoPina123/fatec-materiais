#include<iostream>
using namespace std; 


int soma_vetor (const int v[], int n) {
    
         int soma = 0;
   
        for(int i = 0; i< n; i++) {
           
            soma += v[i]; }
            return soma;}

int main() {
    
   
    int n; 
    cin >> n; 
    int v[10];
    
    for(int i = 0; i <n ; i++) {
    cin >> v[i];
    }
    
    cout << soma_vetor(v,n); 

    
    
    return 0;}
