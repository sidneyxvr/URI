// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Nossos Dias Nunca Voltarão
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1864

#include <iostream>
#include <string>

using namespace std;

int main(){
	string nome = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cout << nome.at(i);
	}
	cout << endl;
	
	return 0;
}
