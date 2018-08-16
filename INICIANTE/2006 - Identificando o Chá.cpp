// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Identificando o Chá
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2006

#include <iostream>

using namespace std;

int main(){
	int v[6],qtde=0;
	cin >> v[0];
	for(int i=1;i<6;i++){
		cin >> v[i];
		if(v[i]==v[0])
			qtde+=1;
	}
	cout << qtde << endl;
	return 0;
}
