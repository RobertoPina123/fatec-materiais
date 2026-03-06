// Este programa pede o ano de nascimento do usuario
// e calcula a idade com base no ano atual
#include <iostream>

using namespace std;

int main() {
	int ano_nasc, idade; // declaracao de variavel
	
	cout << "Qual o ano do seu nascimento? ";
	cin >> ano_nasc;
	
	idade = 2026 - ano_nasc;
	
	cout << "Sua idade eh " << idade << " anos." << endl;
	
	return 0;
}

