// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Jogo do Tijolo
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1436

#include <bits/stdc++.h>

using namespace std;

int main (){

	int caso, n, v[12], m, j=0;
	
	cin >> caso;
	
	while( caso-- ){
		cin >> n;
		for( int i = 0 ; i < n ; i++ )
			cin >> v[i];
			m = v[n/2];
		j++;
		cout << "Case " << j << ": " << m << endl;
	}
	
	return 0;
}
