// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Trigo no Tabuleiro
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1169

#include <bits/stdc++.h>

using namespace std;

int main(){

	long long soma;
	int caso, m, n;
	
	cin >> caso;
	while(caso--){

		cin >> n;
		
		soma = (pow(2,n)-1)/12000;
	
		cout << soma << " kg" << endl;
	
	}
	return 0;
}
