#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;


    cout << "Tamanho do Vetor A: ";
    cin >> n;
    vector<int> A(n);
    cout << "Elementos de A (ordenados): ";
    for (int i = 0; i < n; i++) cin >> A[i];


    cout << "Tamanho do Vetor B: ";
    cin >> m;
    vector<int> B(m);
    cout << "Elementos de B (ordenados): ";
    for (int i = 0; i < m; i++) cin >> B[i];


    vector<int> C;
   

    int i = 0;
    int j = 0; 

    
    while (i < n && j < m) {
        if (A[i] <= B[j]) {
            C.push_back(A[i]);
            i++;
        } else {
            C.push_back(B[j]);
            j++;
        }
    }

  
    while (i < n) {
        C.push_back(A[i]);
        i++;
    }

 
    while (j < m) {
        C.push_back(B[j]);
        j++;
    }

 
    cout << "Mesclado: ";
    for (int k = 0; k < C.size(); k++) {
        cout << C[k] << " ";
    }
    cout << endl;

    return 0;
}
