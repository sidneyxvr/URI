// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Arredondamento por Valor ...
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1305

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	long double a, b;
	while(cin >> a >> b){
		double num = a - (int)a;
		if(num >= b) cout << (int)a + 1 << '\n';
		else cout << (int)a << '\n';
	}
	
	return 0;
}
