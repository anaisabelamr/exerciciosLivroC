#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;


int main(){
	
	cout << "Insira seu primeiro e segundo nome [Seguido de ENTER]: ";
	string primeiroNome;
	string segundoNome;
	cin >> primeiroNome;
	cin >> segundoNome;
	cout << "Ola, " << primeiroNome << " " << segundoNome << "\n\n";	
	return 0;
}
