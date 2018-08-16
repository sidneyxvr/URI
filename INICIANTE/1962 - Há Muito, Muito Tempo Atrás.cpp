// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Há Muito, Muito Tempo Atrás
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1962

#include <iostream>

using namespace std;

int main(){
	int caso, ano, tempo;
	cin >> caso;
	while(caso--){
		cin >> ano;
		if(ano>2014){
			tempo=ano-2014;
			cout << tempo << " A.C." << endl;
		}else{
			tempo=-ano+2015;
			cout << tempo << " D.C." << endl;
		}
	}
	return 0;
}
