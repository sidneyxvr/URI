// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Mjölnir
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1865

#include <iostream>
#include <string>

using namespace std;

int main(){
	int caso,forca;
	string nome;
	cin >> caso;
	while(caso--){
		cin >> nome >> forca;
		if(nome=="Thor")
			cout << "Y" << endl;
		else
			cout << "N" << endl;
	}

	return 0;
}
