#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;


int main(){
	
	cout << "Insira seu nome e sua idade [Seguido de ENTER]: ";
	string primeiroNome;
	int idade;
	cin >> primeiroNome;
	cin >> idade;
	cout << "Ola, " << primeiroNome <<"!!\nIdade: " << idade << "\n\n";	
	return 0;
}
