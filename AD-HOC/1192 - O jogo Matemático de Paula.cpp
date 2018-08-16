// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: O jogo Matemático de Paula
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1192

#include <iostream>
#include <string>

using namespace std;

int main(){
	string n;
	int caso, resultado;
	cin >> caso;
	while(caso--){
		cin >> n;
		if(n.at(0)==n.at(2))
			resultado=(n[0]-48)*(n[2]-48);
		else if(isupper(n.at(1)))
			resultado=(n.at(2)-48)-(n.at(0)-48);
		else if(islower(n.at(1)))
			resultado=(n.at(2)-48)+(n.at(0)-48);
		cout << resultado << endl;
	}
	
	return 0;	
}
