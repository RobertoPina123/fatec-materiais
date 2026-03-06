// Faça um programa que receba a altura (m) e peso (Kg) 
// do usuário e calcule o IMC = peso / altura*altura. 
// Dica: você deve usar variáveis do tipo float.
#include <iostream>

using namespace std;

int main () {
  float peso, altura, imc;

  cout << "Informe sua altura (m): ";
  cin >> altura;

  cout << "Informe seu peso (Kg): ";
  cin >> peso;

  imc = peso / (altura * altura);

  cout << "Seu IMC eh " << imc << endl;
  return 0;
}
