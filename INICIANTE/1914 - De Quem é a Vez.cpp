// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: De Quem é a Vez?
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1914

#include <iostream>
#include <string>

using namespace std;

int main(){
	string nome1,nome2,escolha1,escolha2;
	int caso,num1,num2;
	cin >> caso;
	while(caso--){
		cin >> nome1 >> escolha1 >> nome2 >> escolha2;
		cin >> num1 >> num2;
		if((num1+num2)%2==1){
			if(escolha1=="IMPAR")
				cout << nome1 << endl;
			else
				cout << nome2 << endl;
		}
		if((num1+num2)%2==0){
			if(escolha1=="PAR")
				cout << nome1 << endl;
			else
				cout << nome2 << endl;
		}
	}
	
	return 0;
}
