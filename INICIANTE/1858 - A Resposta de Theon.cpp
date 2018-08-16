// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: A Resposta de Theon
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1858

#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, x, t, p = 1, menor = 100;
	
	cin >> x;
	
	for ( int i  = 0 ; i < x ; i++ ) {
		cin >> t;
		if ( t < menor ) {
			menor = t;
			p = i+1;
		}
	}
	cout << p << endl;
	
	return 0;
}
